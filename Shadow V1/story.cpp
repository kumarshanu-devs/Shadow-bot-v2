#include "story.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

struct Story {
    string title;
    string content;
};

vector<Story> stories;

void loadStoriesFromFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error: Could not open stories file.\n";
        return;
    }

    stories.clear();

    string line, title, content;
    while (getline(file, line)) {
        if (isdigit(line[0])) {
            if (!title.empty()) {
                stories.push_back({title, content});
                content.clear();
            }
            size_t dotPos = line.find('.');
            if (dotPos != string::npos) {
                title = line.substr(dotPos + 1);
                if (!title.empty() && title[0] == ' ') title = title.substr(1);
            } else {
                title = line;
            }
        } else {
            content += line + "\n";
        }
    }

    if (!title.empty() && !content.empty()) {
        stories.push_back({title, content});
    }

    file.close();
}

void showStoryMenu() {
    loadStoriesFromFile("stories.txt");

    if (stories.empty()) {
        cout << "No stories available.\n";
        return;
    }

    cout << "\n===== Story List =====\n";
    for (size_t i = 0; i < stories.size(); ++i) {
        cout << i + 1 << ". " << stories[i].title << "\n";
    }

    cout << "\nEnter the story number to read or type 'home' or 'back' to return: ";
    string input;
    cin >> input;

    if (input == "home" || input == "back") {
        return;
    }

    int choice;
    try {
        choice = stoi(input);
    } catch (...) {
        cout << "Invalid input.\n";
        return;
    }

    if (choice < 1 || choice > (int)stories.size()) {
        cout << "Invalid choice. Try again.\n";
        return;
    }

    cout << "\n===== " << stories[choice - 1].title << " =====\n";
    cout << stories[choice - 1].content << "\n";

    cout << "\nType 'back' to return to the story list or 'home' to return to main menu: ";
    string nextInput;
    cin >> nextInput;

    if (nextInput == "back") {
        showStoryMenu();
    }
}

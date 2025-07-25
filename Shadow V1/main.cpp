
#include <iostream>
#include <string>
#include "chatbot.h"
#include "calculator.h"
#include "story.h"
#include "game.h"

using namespace std;

void showMenu() {
    cout << "\n========= MAIN MENU =========" << endl;
    cout << "1. Chat with Shadow" << endl;
    cout << "2. Calculator" << endl;
    cout << "3. Read a Story" << endl;
    cout << "4. Guessing Game" << endl;
    cout << "5. Exit" << endl;
    cout << "==============================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    string name;

    cout << "Welcome! Please enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << "! I'm Shadow Bot.\n";

    do {
        showMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                chatbot(name);
                break;
            case 2:
                calculator();
                break;
            case 3:
                readStory();
                break;
            case 4:
                playGame();
                break;
            case 5:
                cout << "Goodbye " << name << "!\n";
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

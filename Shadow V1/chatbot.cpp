
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <windows.h>
using namespace std;

void speak(const string& text) {
    string command = "powershell -Command \"Add-Type -AssemblyName System.Speech; "                      "$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer; "                      "$speak.Speak(\"" + text + "\")\"";
    system(command.c_str());
}

void chatbot(const string& name) {
    map<string, string> responses;
    ifstream file("chatbot_data.txt");
    string line;

    while (getline(file, line)) {
        size_t sep = line.find(":");
        if (sep != string::npos) {
            string key = line.substr(0, sep);
            string value = line.substr(sep + 1);
            responses[key] = value;
        }
    }
    file.close();

    string input;
    cout << "\n[Shadow Bot] Type 'exit' to return to main menu.\n";

    while (true) {
        cout << "[" << name << "] ";
        getline(cin, input);
        if (input == "exit") break;

        auto it = responses.find(input);
        if (it != responses.end()) {
            cout << "[Shadow Bot] " << it->second << "\n";
            speak(it->second);
        } else {
            string reply = "Sorry, I don't understand that.";
            cout << "[Shadow Bot] " << reply << "\n";
            speak(reply);
        }
    }
}

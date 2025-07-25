
#include <iostream>
using namespace std;

void calculator() {
    int choice;
    double num1, num2;

    cout << "\n======= Calculator =======" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Back to Main Menu" << endl;

    while (true) {
        cout << "Choose operation (1-6): ";
        cin >> choice;

        if (choice == 6) break;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << "\n";
                break;
            case 2:
                cout << "Result: " << num1 - num2 << "\n";
                break;
            case 3:
                cout << "Result: " << num1 * num2 << "\n";
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << "\n";
                else
                    cout << "Error: Division by zero.\n";
                break;
            case 5:
                cout << "Result: " << ((int)num1 % (int)num2) << "\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}

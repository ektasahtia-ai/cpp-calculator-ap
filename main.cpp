#include <iostream>
using namespace std;

// ===== BASIC CALCULATOR =====
void basicCalculator() {
    int choice;
    double a, b;

    cout << "\n--- Basic Calculator ---\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {
        case 1:
            cout << "Result = " << a + b << endl;
            break;
        case 2:
            cout << "Result = " << a - b << endl;
            break;
        case 3:
            cout << "Result = " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Error: Division by zero!\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
}

// ===== ARITHMETIC PROGRESSION =====
void arithmeticProgression() {
    int choice;
    double a, d, n;

    cout << "\n--- Arithmetic Progression ---\n";
    cout << "1. Find nth term\n";
    cout << "2. Find sum of n terms\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter first term (a): ";
    cin >> a;
    cout << "Enter common difference (d): ";
    cin >> d;
    cout << "Enter number of terms (n): ";
    cin >> n;

    switch(choice) {
        case 1: {
            double nth = a + (n - 1) * d;
            cout << "Nth term = " << nth << endl;
            break;
        }
        case 2: {
            double sum = (n / 2) * (2 * a + (n - 1) * d);
            cout << "Sum of AP = " << sum << endl;
            break;
        }
        default:
            cout << "Invalid choice!\n";
    }
}

// ===== MAIN FUNCTION =====
int main() {
    int mainChoice;

    do {
        cout << "\n====== MAIN MENU ======\n";
        cout << "1. Basic Calculator\n";
        cout << "2. Arithmetic Progression\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch(mainChoice) {
            case 1:
                basicCalculator();
                break;
            case 2:
                arithmeticProgression();
                break;
            case 3:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(mainChoice != 3);

    return 0;
}
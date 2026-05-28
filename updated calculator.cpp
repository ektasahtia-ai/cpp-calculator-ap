#include <iostream>
#include <cmath>
using namespace std;

class SmartCalculator {

public:

    // Basic Operations
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Division by zero not possible!\n";
            return 0;
        }
        return a / b;
    }

    // Power
    double power(double a, double b) {
        return pow(a, b);
    }

    // Square Root
    double squareRoot(double a) {
        if (a < 0) {
            cout << "Negative number not allowed!\n";
            return 0;
        }
        return sqrt(a);
    }

    // Factorial
    long long factorial(int n) {
        long long fact = 1;

        for(int i = 1; i <= n; i++) {
            fact *= i;
        }

        return fact;
    }

    // Arithmetic Progression - Nth Term
    int nthTermAP(int a, int d, int n) {
        return a + (n - 1) * d;
    }

    // Arithmetic Progression - Sum
    int sumAP(int a, int d, int n) {
        return (n * (2 * a + (n - 1) * d)) / 2;
    }

    // Generate AP Series
    void displayAPSeries(int a, int d, int n) {

        cout << "AP Series: ";

        for(int i = 0; i < n; i++) {
            cout << a + (i * d) << " ";
        }

        cout << endl;
    }
};

int main() {

    SmartCalculator calc;

    int choice;

    do {

        cout << "\n========== SMART CALCULATOR ==========\n";

        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Factorial\n";
        cout << "8. AP Nth Term\n";
        cout << "9. AP Sum\n";
        cout << "10. Display AP Series\n";
        cout << "11. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        double a, b;
        int first, diff, n;

        switch(choice) {

            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << calc.add(a, b) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << calc.subtract(a, b) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << calc.multiply(a, b) << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << calc.divide(a, b) << endl;
                break;

            case 5:
                cout << "Enter base and power: ";
                cin >> a >> b;
                cout << "Result = " << calc.power(a, b) << endl;
                break;

            case 6:
                cout << "Enter number: ";
                cin >> a;
                cout << "Square Root = " << calc.squareRoot(a) << endl;
                break;

            case 7:
                cout << "Enter number: ";
                cin >> n;
                cout << "Factorial = " << calc.factorial(n) << endl;
                break;

            case 8:
                cout << "Enter first term, common difference, and n: ";
                cin >> first >> diff >> n;

                cout << "Nth Term = "
                     << calc.nthTermAP(first, diff, n)
                     << endl;
                break;

            case 9:
                cout << "Enter first term, common difference, and n: ";
                cin >> first >> diff >> n;

                cout << "Sum of AP = "
                     << calc.sumAP(first, diff, n)
                     << endl;
                break;

            case 10:
                cout << "Enter first term, common difference, and n: ";
                cin >> first >> diff >> n;

                calc.displayAPSeries(first, diff, n);
                break;

            case 11:
                cout << "Program Exited Successfully!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 11);

    return 0;
}
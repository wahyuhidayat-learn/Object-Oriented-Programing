#include <iostream>
using namespace std;

class Calculator {
public:
    // Penjumlahan
    double add(double a, double b) {
        return a + b;
    }

    // Pengurangan
    double subtract(double a, double b) {
        return a - b;
    }

    // Perkalian
    double multiply(double a, double b) {
        return a * b;
    }

    // Pembagian
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};
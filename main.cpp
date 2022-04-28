#include <iostream>

using namespace std;

double function_3(double n) {
    if (n < 1) { return -10; }
    else {
        return (((n / n + 2)) - 10) * function_3(n - 1);
    }
}

bool helper = false;
double number;

double function_4() {

    double number2;

    if (helper == false) {
        cout << "Please enter the number to solve equation 2 in lab 6 without paremeter: " << endl;
        cin >> number2;
        number = number2;
        helper = true;
    } else {
        number--;
        number2 = number;
    }

    if (number2 < 1) { return -10; }
    else {
        return (((number2 / number2 + 2)) - 10) * function_4();
    }
}


int main() {
    double number;
    cout << "Please enter the number to solve equation 2 in lab 6: " << endl;
    cin >> number;
    cout << "Result of eq2: " << function_3(number) << endl;

    cout << "Result of eq2 q4: " << function_4() << endl;

    return 0;
}
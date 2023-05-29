#include <iostream>

using namespace std;

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    int sum;
        
    cout << "Enter number1: ";
    cin >> num1;

    cout << "Enter number2: ";
    cin >> num2;

    sum = solveMeFirst(num1, num2);

    cout << "Result: " << num1 << " + " << num2 << " = " << sum << endl;

    return 0;
}
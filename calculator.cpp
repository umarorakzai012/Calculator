#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    char operand;
    cout << "+, -, *, /: ";
    cin >> operand;

    switch (operand)
    {
    case '+':
        cout << "Result of Addition: " << (num1 + num2);
        break;

    case '-':
        cout << "Result of Subtraction: " << (num1 - num2);
        break;

    case '*':
        cout << "Result of Multiplication: " << (num1 * num2);
        break;

    case '/':
        cout << "Result of Division: " << (num1 / num2);
        break;

    default:
        break;
    }


    return 0;
}
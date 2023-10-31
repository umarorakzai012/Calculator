#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    char operand;

    do{
        cout << "\n\nEnter Number 1: ";
        cin >> num1;
        cout << "Enter Number 2: ";
        cin >> num2;

        cout << "+, -, *, / or q(quit): ";
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
            try
            {
                if(num2 == 0){
                    throw exception();
                }
                cout << "Result of Division: " << (num1 / num2);
            }
            catch(const exception& e)
            {
                cerr << "Cannot divide by zero" << '\n';
            }
            break;
        
        case 'q':
            break;

        default:
            cout << "Choose correct option please!";
            break;
        }
    }while(operand != 'q');

    return 0;
}
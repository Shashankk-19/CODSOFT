#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    char operation;

    cout << "enter the first number: ";
    cin >> number1;

    cout << "enter the second number: ";
    cin >> number2;

    cout << "enter the operation ( + , - , * , / ): ";
    cin >> operation;

    switch (operation)
    {
    case '+' :
        result = number1 + number2;
        cout << "the operator you slected is + " << endl;
        cout << "the sum of " << number1 << " and " << number2 << " is : " << result;
        break;

    case '*' :
        result = number1 * number2;
        cout << "the operator you slected is * " << endl;
        cout << "the multiplication of " << number1 << " and " << number2 << " is : " << result;
        break;

    case '-' :
        result = number1 - number2;
        cout << "the operator you slected is - " << endl;
        cout << "the subtraction of " << number1 << " and " << number2 << " is : " << result;
        break;

    case '/' :
        result = number1 / number2;
        cout << "the operator you slected is / " << endl;
        cout << "the division of " << number1 << " and " << number2 << " is : " << result;
        break;
    
    default:
    cout << "you have slected an invalid operation. ";
       break;
    }

}
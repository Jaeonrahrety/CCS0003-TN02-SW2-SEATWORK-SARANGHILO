#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    char sign;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    
    cout<<"Enter the operator (+, -, *, /): ";
    cin>> sign;
    
    switch (sign){
        case '+':
        result = num1 + num2;
        break;
        
        case '-':
        result = num1 - num2;
        break;
        
        case '*':
        result = num1 * num2;
        break;
        
        case '/':
        result = num1 / num2;
        break;
    }
    cout << "The result of operation is: " << result;
    
    return 0;
}

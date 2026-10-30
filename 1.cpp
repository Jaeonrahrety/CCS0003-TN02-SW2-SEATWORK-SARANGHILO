#include <iostream>
using namespace std;

int main()
{
    int num, digits = 0;
    cout<<"Enter your number: ";
    cin>>num;
    
    if (num < 10000){
        if (num > 0){
            cout << "The number is positive." << endl;
            while (num > 0){
                num = num/10;
                digits = digits + 1;
            }
            cout << "The number of digits is "<< digits << endl;
            
        }else{
            cout << "It is a non-positive number";
        }
        
    }else{
        cout << "The maximum digits is 4";
    }

    return 0;
}

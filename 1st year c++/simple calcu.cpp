#include<iostream>
#include<string>
using namespace std;

int main()
{
float num1, num2;
char ope;
    cout << "Enter Number: ";
    cin >> num1;
    cout << "Enter Operator(+, -, *, /): ";
    cin >> ope;
    cout << "Enter Number: ";
    cin >> num2;
    switch (ope) {
    case '+' : cout << "Answer: " << num1+num2;
    break;
    
    case '-' : cout << "Answer: " << num1-num2;
    break;
    
    case '*' : cout << "Answer: " << num1*num2;
    break;
    
    case '/' : cout << "Answer: " << num1/num2;
    break;
    
    default : cout << "Invalid Operator";
    }
    return 0;
}

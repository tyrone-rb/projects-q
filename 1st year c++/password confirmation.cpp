#include<iostream>
#include<string>
using namespace std;

int main()
{
string pas;
string conpass;
string user;
cout << "Enter Username: ";
cin >> user;
cout << "Enter Password: ";
cin >> pas;
cout << "Confirm Password: ";
cin >> conpass;
    
     switch (pas == conpass) {
    case 1 : break;
    
    case 0 : cout << "Password doesn't Match";
    cout << "\nEnter the same password: ";
    cin >> conpass;
    break;
    
    }
    while (pas != conpass) {
    cout << "Password doesn't Match";
    cout << "\nEnter the same password: ";
    cin >> conpass;
    if (pas == conpass) {
    break;
    }
    else cout << "Password doesn't Match";
    cout << "\nEnter the same password: ";
    cin >> conpass;
    }
    
    cout << "==Confirmed Password!==";
    
    return 0;
}

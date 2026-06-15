#include <iostream>
#include <string>
using namespace std;

//account signup

int main() {
    string nameFirst;
    string nameSurname;
    string nameMiddle;

    //tatanyngin name nang isa isa
    cout << "Enter your First Name: "; // using getline para buong line ma cin
    getline(cin, nameFirst);
    cout << "Enter your Middle Name: ";
    getline(cin, nameMiddle);
    cout << "Ener your Surname: ";
    getline(cin, nameSurname);

    cout << "Your Full Name: " << nameFirst << " " << nameMiddle[0] << "." << " " << nameSurname;


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayMenu(string &usr,string &pass) {

    cout << "Enter Username: ";
    cin >> usr;
    cout << "Enter Password: ";
    cin >> pass;
}


int main() {
    string user;
    string password;
    bool login = false;

    cout << "   Create new account\n";
    displayMenu(user, password);

    ofstream admin("password manager.txt", ios::trunc);
    admin << user;
    admin << " ";
    admin << password;
    admin << "\n";
    admin.close();

    cout << "\n--Creating Account Success--\n\n";

    cout << "   Login\n";

    string line;
    string userLogin, passLogin, fileUser, filePass;

    displayMenu(userLogin, passLogin);

    ifstream readAdmin("password manager.txt");


    while (readAdmin >> fileUser >> filePass) {

        if (fileUser == userLogin &&
                filePass == passLogin) {
            login = true;
            break;
        }
    }
    readAdmin.close();

    if (login)
        cout << "Login Success";
    else
        cout << "Credentials not Match!";

    return 0;
}

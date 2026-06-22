#include<iostream>
#include<string>
using namespace std;

bool isAlphabetOnly(const std::string& input); 


int main () {

    string answer = "build";
    string ans = "";
    int time = 0;
    string playerAns;
    string instruction = "======This is Wordle======\n=====Enter 5 letter word=====";
    bool valid = 0;
    
    cout << instruction;
    
    while (time < 6 && playerAns != answer) {

    valid = false;

    while (!valid) {
        cout << "\nEnter a 5 letter word: ";
        cin >> playerAns;

        valid = isAlphabetOnly(playerAns) && playerAns.length() == 5;

        if (!valid)
            cout << "\n[Error]: Enter exactly 5 alphabet letters.\n";
    }

    for (int i = 0; i < 5; i++) {

        if (playerAns == answer) {
            cout << "| G || G || G || G || G |";
            break;
        }
        else if (playerAns[i] == answer[i])
            cout << "| G |";

        else if (answer.find(playerAns[i]) != string::npos)
            cout << "| Y |";

        else
            cout << "| B |";
    }

    cout << '\n';
    time++;
}    
    if (playerAns==answer){
    cout<< "\nCongrats you're Correct!";
    }
    else cout << "\nBetter luck next time\n" << "The Answer is: " << answer;
    return 0;
}

bool isAlphabetOnly(const std::string& input) {
    if (input.empty())
        return false; // optional

    for (char ch : input) {
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
            return false;
        }
    }
    return true;
}


#include<iostream>
#include<string>
using namespace std;

int main () {

    string answer = "build";
    string ans = "plane";
    int time = 0;
    string playerAns;
    string instruction = "======This is Wordle======\n=====Enter 5 letter word=====";
    
    
    cout << instruction;
    
    while (time!=6 && playerAns != answer) {
    cout << "\nEnter a 5 letter word: ";
    cin >> playerAns;
    
    for (int i = 0; i<5; i++){
    
    if (playerAns == answer){
    cout << "| G || G || G || G || G |" ;
    break;
    }
    else if (playerAns[i] == answer[i]){
    cout << "| G |" ;
    }
    
    else if (answer.find(playerAns[i]) !=string::npos) {
    cout << "| Y |";
    }
    
    else
    cout << "| B |";
    continue;
    
    }
   time++;
    }
    
    if (playerAns==answer){
    cout<< "\n Congrats you're Correct!";
    }
    else cout << "\nBetter luck next time\n" << "The Answer is: " << answer;
    return 0;
}

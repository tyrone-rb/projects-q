#include<iostream>
#include<string>
using namespace std;

int main () {

    string nameFirst;
    string vowels = "AEIOUYaeiouy";
    int syllables = 0;
    int consonant = 0;
    char space = ' ';
    cout << "Enter your Name: ";
    getline(cin, nameFirst);
    
    for (int i=0; i < nameFirst.length(); i++) {
    if (vowels.find(nameFirst[i]) != string::npos){
    syllables++;
    }
    else if (nameFirst[i] == space){
    continue;}
    else {
    consonant++;
    }
    
    }
    cout << "\nSyllable Count: " << syllables << endl;
    cout << "Consonant Count: " << consonant << endl;
    

    return 0;
}

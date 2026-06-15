#include<iostream>
#include<string>
using namespace std;

int main () {

    string sentence = "Tyrone Rogel";
    string vowels = "AEIOUaeiou";
    string a = "a";
    string e = "e";
    string i = "i";
    string o = "o";
    string u = "u";
    string origSentence;
    
    int vowelCount = 0;
    int wordCount = 1;
    char space = ' ';
    cout << "Enter: ";
    getline (cin, sentence);
    origSentence.assign(sentence); //assign para ma retain orig form 
    //sa vowel and word count langs
    for (int i=0; i < sentence.length(); i++) {
    if (vowels.find(sentence[i]) != string::npos){
    vowelCount++;
    }
    else if (sentence[i] == space){
    wordCount++;}
    }
    //taga uppercase and reverse
    for (int j=0; j < sentence.length(); j++){
    if (a.find(sentence[j]) != string::npos){
    sentence.replace(j, 1, "A");
    }
    else if (e.find(sentence[j]) != string::npos){
    sentence.replace(j, 1, "E");
    }
    else if (i.find(sentence[j]) != string::npos){
    sentence.replace(j, 1, "I");
    }
    else if (o.find(sentence[j]) != string::npos){
    sentence.replace(j, 1, "O");
    }
    else if (u.find(sentence[j]) != string::npos){
    sentence.replace(j, 1, "U");
    }
    }
    string revSent = " ";
    string upperSent = sentence.substr(0);
    for (int k=sentence.length()-1; k >= 0 ; k--){
    revSent+=upperSent[k];
    }
    cout << "--Output--" << endl;
    cout << "Vowels Count: " << vowelCount << endl;
    cout << "Word Count: " << wordCount << endl;
    cout << "Original Sentence: " << origSentence << endl;
    cout << "Uppercase Vowels: " << upperSent << endl;
    cout << "Reverse Sentence: " << revSent << endl;

    return 0;
}
    

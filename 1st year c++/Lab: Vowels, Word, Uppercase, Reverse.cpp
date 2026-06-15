#include<iostream>
#include<string>
using namespace std;

int main () {

	string sentence;
	string vowels = "AEIOUaeiou";
	string origSentence;

	int vowelCount = 0;
	int wordCount = 1;
	char space = ' ';
	cout << "Enter a Sentence: ";
	getline (cin, sentence);
	origSentence.assign(sentence); //assign para ma retain orig form
	//sa vowel and word count langs
	for (int i=0; i < sentence.length(); i++) {
		if (vowels.find(sentence[i]) != string::npos) {
			vowelCount++;
		}
		else if (sentence[i] == space) {
			wordCount++;
		}
	}
	//taga uppercase
	for (int j=0; j < sentence.length(); j++) {
		if (sentence[j] == 'a') sentence[j] = 'A';
		else if (sentence[j] == 'e') sentence[j] = 'E';
		else if (sentence[j] == 'i') sentence[j] = 'I';
		else if (sentence[j] == 'o') sentence[j] = 'O';
		else if (sentence[j] == 'u') sentence[j] = 'U';
	}
	//reverse sentence
	string revSent = sentence.substr(0);
	int n = sentence.length();
	for (int k = 0; k < n; k++) {
		revSent[k] = sentence[n - 1 - k];
	}
	cout << "\nOriginal Sentence: " << origSentence << endl;
	cout << "Vowels Count: " << vowelCount << endl;
	cout << "Word Count: " << wordCount << endl;
	cout << "Uppercase Vowels: " << sentence << endl;
	cout << "Reverse Sentence: " << revSent << endl;

	return 0;
}

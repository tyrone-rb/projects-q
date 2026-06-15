#include<iostream>
using namespace std;
#include <string>
#include <cctype>

int main()
{
    string name;
    getline (cin, name);

    int sycount = 0;

    for (int i = 0; i <name.length(); i++) {
        char c = tolower(name[i]);

        if (c=='a'|| c=='e' || c=='i' || c=='o'|| c=='u'|| c=='y') {
            sycount++;
        }

    }
    if (name.back( ) == 'e') {
        sycount--;
    }

    cout << "Syllable Count: " << sycount;
    return 0;
}

#include<iostream>
#include <vector>
using namespace std;


int main()
{
    int choice;
    char choice2nd;
    int tempinput;
    string degree = "°C";
    vector<double> temperature;

    do {

        do {
            cout << "How many Temperature to input: ";
            cin >> tempinput;
            if (cin.fail() || tempinput == 0 || tempinput <= 0 || choice >= 100) {
                cout <<"Invalid Input!" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }
            else break;
        } while (cin.fail() || tempinput == 0 || tempinput <= 0 || choice >= 100);

        for (int i = tempinput; i > 0; i--) {
            cout << "Enter Temperature: ";
            cin >> choice;
            if (cin.fail() || choice == 0 || choice <= 0 || choice >= 60) {
                cout <<"Invalid Input!" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                i++;
                continue;
            }
            temperature.push_back(choice);

        }

        if (temperature.empty() != 1) {

            //Temperature recorded
            cout << "\n   All Recorded Temperature: \n";
            for (int i = 0; i < temperature.size(); i++) {

                cout << (i+1) << ". Temperature: " << temperature.at(i) << degree << endl;

            }
            //Average Recorded
            double totaltemp = 0;
            for (int i = 0; i < temperature.size(); i++) {
                totaltemp+= temperature.at(i);
            }
            cout << "\n   Average Temperature per Day: " << totaltemp/(temperature.size()) << degree << endl << endl;

            //sorting
            for (int i = 0; i < temperature.size() - 1; i++) {
                for (int j = 0; j < temperature.size() - i - 1; j++) {
                    if (temperature.at(j) > temperature.at(j + 1)) {
                        // swap
                        int temp = temperature.at(j);
                        temperature.at(j) = temperature.at(j + 1);
                        temperature.at(j + 1) = temp;
                    }
                }
            }


            //Highest Temp
            cout << "   Highest Temp: " << temperature.back() << degree << endl<<endl;
            
            //Lowest Temp
            cout << "   Lowest Temp: " << temperature.front() << degree << endl<<endl;
            
            //Num of temp na 40+
            int numtemp = 0;
            for (int i = 0; i < temperature.size(); i++) {
                if (temperature.at(i) >= 40) {
                    numtemp++;
                }
                else continue;
            }
            cout << "   Number of Temperature readings beyond 40 Celcius: " << numtemp << endl<<endl;

            //Sort Temperature in ascending order
            cout << "   Ascending Order:" << endl;
            for (int i = 0; i < temperature.size(); i++) {

                cout << (i+1) << ". Temperature: " << temperature.at(i) << degree << endl;

            }

            // Categorize Temp
            // Cold hot normal
            vector <string> status;
            for (int i = 0; i < temperature.size(); i++) {
                if (temperature.at(i) <= 20) {
                    status.push_back("  - Cold");
                }
                else if (temperature.at(i) < 35) {
                    status.push_back("  - Normal");
                }
                else if (temperature.at(i) >= 35) {
                    status.push_back("  - Hot");
                }

            }

            cout << "\n   Temperature Category: " << endl;
            for (int i = 0; i < temperature.size(); i++) {

                cout << (i+1) << ". Temperature: " << temperature.at(i) << degree << status.at(i) << endl;

            }

        }
        cout << "\nDo you still want to continue? (Enter Y/y) ";
        cin >> choice2nd;

    } while (choice2nd == 'Y' || choice2nd == 'y');
    return 0;
}

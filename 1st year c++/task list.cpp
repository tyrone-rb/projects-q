#include <iostream>
#include <list>
#include <string>
using namespace std;

void displayMenu(){
    cout << "   To-do List\n\n";
    cout << "1. Add Task\n";
    cout << "2. Delete Task\n";
    cout << "3. Mark Task as Done\n";
    cout << "4. Display Task\n";
    cout << "5. Exit Program\n\n";
}

void addTask(list <string> &x){
    string t;
    cout << "\nEnter Task: ";
    cin.ignore(1000, '\n');
    getline(cin, t);
    x.push_back(t);
    cout << '\n';
}

void deleteTask(list <string> &x){
    int choice;
    cout << "\nWhat Number: ";
    cin.ignore(1000,'\n');
    cin >> choice;
    auto pos = x.begin();
    advance (pos, choice -1); //move yung pos to position choice -1
    x.erase(pos);
    cout << '\n';
}

void markTask(list<string>& tasks, list<bool>& status) {
    int choice;

    cout << "\nWhat Number: ";
    cin >> choice;
    cout << '\n';

    auto taskPos = tasks.begin();
    auto statusPos = status.begin();

    advance(taskPos, choice - 1);
    advance(statusPos, choice - 1);

    *statusPos = true;
} //hirap neto

void displayTask(list<string> x, list<bool> &status) {
    auto stat = status.begin();
    int y = 1;
    
    cout << "   To-do List\n\n";
    if (x.empty())
        cout << "--  To-do List is Empty  --\n";
        
    else
    for (auto i = x.begin(); i != x.end(); ++i, ++stat) {
        cout << y << ". ";

        if (*stat)
            cout << "[✓] ";
        else
            cout << "[ ] ";

        cout << *i << '\n';
        y++;
    }
    cout << '\n';
}

int main(){

bool done = false;
int choice;
list <string> task;
list <bool> status;

while (!done){
    displayMenu();
    while (true) {
    cout << "Enter your Choice: ";
    cin >> choice;
        if (cin.fail()){
            cout << "\nNumbers Only!\n";
            cin.clear();
            cin.ignore(10000,'\n');
            continue;
        }    
        else if (choice > 5 || choice <= 0){
            cout << "\nInvalid Input\n";
            continue;
        }
         
        break;
        
    } 
    
    switch (choice){
        case 1:
            addTask(task);
            continue;
        case 2:
            deleteTask(task);
            continue;
        case 3:
            markTask(task, status);
            continue;
        case 4:
            displayTask(task, status);
            continue;
        case 5:
            cout << "\n\nExiting the Program...mwa";
            done = true;
            break;
    }
    }
    
return 0;
}

/*Add tasks
Delete tasks
Mark tasks as completed
Display all tasks
*/
    



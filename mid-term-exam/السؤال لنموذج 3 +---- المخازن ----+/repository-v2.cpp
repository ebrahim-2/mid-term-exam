#include <iostream>
#include <string>
using namespace std; // السؤال لنموذج رقم 3

// تعريف السجل
struct repository
{
    int no;
    char name[10];
    int num_of_pieces;
    int cost_of_pieces;
    int total;
} s[5];

// تعريف الدوال
void getTheInputFromTheUser();
void printTheRepository();
void askUser();
void print(repository s[]);

int main()
{
    getTheInputFromTheUser();
    printTheRepository();
    askUser();
}

void getTheInputFromTheUser()
{
    int num = 0;
    for (int i = 0; i < 5; i++) //ادخال القيم
    {
        num += 1;
        s[i].no = num;
        cout << "Enter piece name:";
        cin >> s[i].name;
        cout << "How many pieces in the repository ?";
        cin >> s[i].num_of_pieces;
        cout << "What is the cost of this piece ?";
        cin >> s[i].cost_of_pieces;
        s[i].total = s[i].num_of_pieces * s[i].cost_of_pieces;
        cout << endl
             << "#####################################################" << endl;
    }
}
void printTheRepository()
{
    cout << "student number:  \tname:  \t\tnumber of pieces:  \tcost of pieces: \ttotal:" << endl;
    for (int i = 0; i < 5; i++) //طباعة القيم
    {
        cout << "#" << s[i].no << "\t\t\t" << s[i].name << "\t\t" << s[i].num_of_pieces << "\t\t\t" << s[i].cost_of_pieces << "\t\t\t" << s[i].total << endl;
    }
    cout << endl;
}
void askUser()
{
    string choice;
    cout << "Do you want to print the biggest pieces in the repository [yes][no]:";
    cin >> choice;
    if (choice == "yes")
        print(s);
}
void print(repository s[])
{
    repository result = s[0];
    for (int i = 0; i < 5; i++)
    {
        if (result.num_of_pieces < s[i].num_of_pieces)
        {
            result = s[i];
        }
    }
    cout << "+---(The biggest pieces in the repository)---+" << endl;
    cout << "student number:  \tname:  \t\tnumber of pieces:  \tcost of pieces: \ttotal:" << endl;
    cout << "#" << result.no << "\t\t\t" << result.name << "\t\t" << result.num_of_pieces << "\t\t\t" << result.cost_of_pieces << "\t\t\t" << result.total << endl;
}
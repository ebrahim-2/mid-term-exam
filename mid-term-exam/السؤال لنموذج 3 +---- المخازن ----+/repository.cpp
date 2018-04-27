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

int main()
{
    for (int i = 0; i < 5; i++) //ادخال القيم
    {
        cout << "Enter The Number Of The Piece:";
        cin >> s[i].no;
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
    cout << "student number:  \tname:  \t\tnumber of pieces:  \tcost of pieces: \ttotal:" << endl;
    for (int i = 0; i < 5; i++) //طباعة القيم
    {
        cout << "#" << s[i].no << "\t\t\t" << s[i].name << "\t\t" << s[i].num_of_pieces << "\t\t\t" << s[i].cost_of_pieces << "\t\t\t" << s[i].total << endl;
    }
    cout << endl;
    print(s);
}
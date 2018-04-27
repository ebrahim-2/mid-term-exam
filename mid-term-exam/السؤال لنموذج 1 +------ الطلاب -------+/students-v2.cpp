
#include <iostream>
#include <string>
using namespace std; // السؤال لنموذج 1 -- الطلاب الطريقة الثانية بأستخدام الدوال

// تعريف السجل
struct students
{
    int no;
    char name[10];
    int mark[3];
    int sum;
    int average;
} s[5];

// تعريف الدوال
void getTheInputFromTheUser();
void printTheStudents();
void askUser();
void printTheBiggestStudentMark(students s[]);

int main()
{
    getTheInputFromTheUser();
    printTheStudents();
    askUser();
}

void getTheInputFromTheUser()
{
    int num = 0;
    for (int i = 0; i < 5; i++) //ادخال القيم
    {
        num += 1;
        s[i].no = num;
        cout << "Enter student name:";
        cin >> s[i].name;
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter student mark:";
            cin >> s[i].mark[j];
            s[i].sum += s[i].mark[j];
        }
        cout << endl
             << "#####################################################" << endl;
        s[i].average = s[i].sum / 3;
    }
}
void printTheStudents()
{
    cout << "student number:  \tname:  \t\tsum:  \taverage: " << endl;
    for (int i = 0; i < 5; i++) //طباعة القيم
    {
        cout << "#" << s[i].no << "\t\t\t" << s[i].name << "\t\t" << s[i].sum << "\t" << s[i].average << "\t" << endl;
    }
    cout << endl;
}
void askUser()
{
    string choice;
    cout << "Do you want to print the biggest mark in the students [yes][no]:";
    cin >> choice;
    if (choice == "yes")
        printTheBiggestStudentMark(s);
}
void printTheBiggestStudentMark(students s[])
{
    students result = s[0];
    for (int i = 0; i < 5; i++)
    {
        if (s[i].sum > result.sum)
            result = s[i];
    }
    cout << "+---(The biggest mark in students)---+" << endl;
    cout << "student number:  \tname:  \t\tsum:  \taverage: " << endl;
    cout << "#" << result.no << "\t\t\t" << result.name << "\t\t" << result.sum << "\t" << result.average << endl;
}
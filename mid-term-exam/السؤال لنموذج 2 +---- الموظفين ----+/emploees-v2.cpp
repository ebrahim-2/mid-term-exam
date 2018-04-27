
#include <iostream>
#include <string>
using namespace std;// السؤال لنموذج 2 -- الموظفين الطريقة الثانية بأستخدام الدوال

// تعريف السجل
struct emploee
{
    int no;
    char name[10];
    int salary;
    int tax;
    int bouns;
    int total;
} s[5];

// تعريف الدوال
void getTheInputFromTheUser();
void printTheEmploees();
void askUser();
void printSmallestSalary(emploee s[]);

int main()
{
    // استدعاء الدوال
    getTheInputFromTheUser();
    printTheEmploees();
    askUser();
}

void getTheInputFromTheUser()
{
    int num = 0;
    for (int i = 0; i < 5; i++) //ادخال القيم
    {
        num += 1;
        s[i].no = num;
        cout << "Enter emploee name:";
        cin >> s[i].name;
        cout << "Enter emploee salary:";
        cin >> s[i].salary;
        cout << endl
             << "#####################################################" << endl;
        s[i].tax = s[i].salary * 15 / 100;
        s[i].bouns = s[i].salary * 13 / 100;
        s[i].total = s[i].bouns + s[i].salary - s[i].tax;
    }
}
void printTheEmploees()
{
    cout << "emploee number:  \tname:  \t\tsalary:  \ttax:  \tbouns:  total:" << endl;
    for (int i = 0; i < 5; i++) //طباعة القيم
    {
        cout << "#" << s[i].no << "\t\t\t" << s[i].name << "\t\t" << s[i].salary << "\t\t" << s[i].tax << "\t" << s[i].bouns << "\t" << s[i].total << endl;
    }
    cout << endl;
}

void askUser()
{
    string choice;
    cout << "Do you want to print the smallest salary in the emploees [yes][no]:";
    cin >> choice;
    if (choice == "yes")
        printSmallestSalary(s);
}
void printSmallestSalary(emploee s[])
{
    emploee result = s[0];
    for (int i = 0; i < 5; i++)
    {
        if (s[i].total < result.total)
            result = s[i];
    }
    cout << "+---(The smallest salary in emploees)---+" << endl;
    cout << "emploee number:  \tname:  \t\tsalary:  \ttax:  \tbouns:  total:" << endl;
    cout << "#" << result.no << "\t\t\t" << result.name << "\t\t" << result.salary << "\t\t" << result.tax << "\t" << result.bouns << "\t" << result.total << endl;
}
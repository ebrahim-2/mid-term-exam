#include <iostream>
#include <string>
using namespace std; // السؤال لنموذج 2 -- الموظفين

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

// تعرثف الدالة
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

int main()
{
    for (int i = 0; i < 5; i++) //ادخال القيم
    {
        cout << "Enter emploee number:"; cin >> s[i].no;
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
    cout << "emploee number:  \tname:  \t\tsalary:  \ttax:  \tbouns:  total:" << endl;
    for (int i = 0; i < 5; i++) //طباعة القيم
    {
        cout << "#" << s[i].no << "\t\t\t" << s[i].name << "\t\t" << s[i].salary << "\t\t" << s[i].tax << "\t" << s[i].bouns << "\t" << s[i].total << endl;
    }
    cout << endl;
    printSmallestSalary(s);
}
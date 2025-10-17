#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    string studentName;
    float marks[5], total = 0;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    float average = total / 5;

    cout << fixed << setprecision(2);
    cout << "\nStudent Name: " << studentName << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
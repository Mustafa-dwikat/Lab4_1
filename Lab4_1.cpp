#include <iostream>
using namespace std;
int main()
{
    int Home_Work, Midterm, Final_Exam, Final_Grade;
    cout << "pls inter your \"Homework\" grade (out of 100) : ";
    cin >> Home_Work;
    cout << "pls inter your \"Midterm\" grade (out of 100) : ";
    cin >> Midterm;
    cout << "pls inter your \"Final Exam\" grade (out of 100) : ";
    cin >> Final_Exam;
    Final_Grade = (Home_Work * 0.25) + (Midterm * 0.35) + (Final_Exam * 0.4);
    cout << "Your final grade = " << Final_Grade << "%";
    cout << "you ae a bitch";
}
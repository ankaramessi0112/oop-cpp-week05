#include <iostream>
using namespace std;
int main() {
    string name = "Khang";
    int age = 19;
    const int MAX_AGE = 100;
    double gpa = 8.0;
    int score = 100;
    char grade = 'A';

    int score1 = 50;
    int score2 = 60;
    int score3 = 70;

    cout <<"Hello, my name is " << name << "!" << endl;
    cout <<"Welcome to OOP with C++.."<< endl;

    cout << "=====================\n";
    cout <<"   MY FRIST C++ APP   \n";
    cout << "=====================\n";
    cout << "Name: " << name << "\n";
    cout << "Age:" << age << "\n";
    cout << "GPA: " << gpa << "\n";
    cout << "Grade:" << grade << "\n";

    cout << "Initial score:" << score <<"\n";
    score = 0;
    cout << "Updated score:" << score <<"\n";

    double avgScore = (score1 + score2 + score3) / 3.0;
    cout << "Average score: " << avgScore << "\n";

    cout << "Become a better programmer \n";
    cout << "=====================\n";

    return 0;
} 
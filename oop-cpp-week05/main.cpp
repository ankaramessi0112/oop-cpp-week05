#include <iostream>
using namespace std;

int main()
{
    int n;
    double scores[20];
    cout << "How many students?";
    cin >> n;

    if (n < 2 || n > 20) {
        cout << "Invalid number of students!" << endl;
        cout << "Please enter a number between 2 and 20: ";
        return 0;       
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter score for student " << i + 1 << ": ";
        cin >> scores[i];

        while (scores[i] < 0 || scores[i] > 10) {
            cout << "Invalid input! Please enter a value between 0 and 10: ";
            cin >> scores[i];
        }
    }

    cout << "\n==== STUDENT SCORES ====" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": Score = " << scores[i] << endl;
    }

    cout << "\n===== RESULTS =====" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << scores[i] << " -> ";
        if (scores[i] >= 5.0) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }
    int passed = 0, failed = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= 5.0) {
            passed++;
        } else {
            failed++;
        }
    }
    double passRate = (double)passed / n * 100;

    cout << "\n===== STATISTICS =====" << endl;
    cout << "Passed : " << passed << " students" << endl;
    cout << "Failed : " << failed << " students" << endl;
    cout << "Pass rate: " << passRate << "%" << endl;

    double highest = scores[0];
    double lowest = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) highest = scores[i];
        if (scores[i] < lowest) lowest = scores[i];
    }

    cout << "\nHighest score: " << highest << endl;
    cout << "Lowest score : " << lowest << endl;

    cout << "\n===== RESULTS =====" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << scores[i] << " -> ";
        if (scores[i] >= 9.0) {
            cout << "Excellent" << endl;
        } else if (scores[i] >= 8.0) {
            cout << "Very Good" << endl;
        } else if (scores[i] >= 6.5) {
            cout << "Good" << endl;
        } else if (scores[i] >= 5.0) {
            cout << "Average" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }

    cout << "\n===== COMPARISON =====" << endl;
    for (int i = 1; i < n; i++) {
        if (scores[i] > scores[i - 1]) {
            cout << "Student " << i + 1 << " improved compared to Student " << i << endl;
        }
    }

    int currentStreak = 0;
    int maxStreak = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= 5.0) {
            currentStreak++;
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
    }

    cout << "\n===== LONGEST PASS STREAK =====" << endl;
    cout << "Longest pass streak: " << maxStreak << " students" << endl;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= 9.0) c5++;
        else if (scores[i] >= 8.0) c4++;
        else if (scores[i] >= 6.5) c3++;
        else if (scores[i] >= 5.0) c2++;
        else c1++;
    }

    cout << "\n===== SCORE DISTRIBUTION =====" << endl;
    
    cout << "0 - <5   : ";
    for (int i = 0; i < c1; i++) cout << "*";
    cout << "  " << c1 << endl;

    cout << "5 - <6.5 : ";
    for (int i = 0; i < c2; i++) cout << "*";
    cout << "  " << c2 << endl;

    cout << "6.5 - <8 : ";
    for (int i = 0; i < c3; i++) cout << "*";
    cout << "  " << c3 << endl;

    cout << "8 - <9   : ";
    for (int i = 0; i < c4; i++) cout << "*";
    cout << "  " << c4 << endl;

    cout << "9 - 10   : ";
    for (int i = 0; i < c5; i++) cout << "*";
    cout << "  " << c5 << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Declare arrays with a maximum capacity of 20 slots inside main
    const int MAX_STUDENTS = 20;
    string names[MAX_STUDENTS];
    string ids[MAX_STUDENTS];
    string phones[MAX_STUDENTS];

    int n = 0;
    // 2. Validate input for N (must be between 2 and 20)
    do {
        cout << "Enter the number of students (2 to 20): ";
        cin >> n;
        if (n < 2 || n > 20) {
            cout << "Invalid number! Please enter a value between 2 and 20.\n";
        }
    } while (n < 2 || n > 20);
    cout << "\n--- Enter Information for " << n << " Students ---\n";

    // 3. Input Loop: Collect data for N students
    for (int i = 0; i < n; i++) {
        cout << "\n[Student " << i + 1 << "]" << endl;

        cout << "Enter Name: ";
        getline(cin, names[i]);

        cout << "Enter Student ID: ";
        getline(cin, ids[i]);

        cout << "Enter Phone: ";
        getline(cin, phones[i]);
    }

    // 4. Output Loop: Display formatted information for all N students
    cout << "\n===========================================" << endl;
    cout << "               STUDENT LIST                " << endl;
    cout << "===========================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Name      : " << names[i] << endl;
        cout << "Student ID: " << ids[i] << endl;
        cout << "Phone     : " << phones[i] << endl;
        cout << endl;
    }

    cout << "Total students: " << n << endl;

    return 0;
}
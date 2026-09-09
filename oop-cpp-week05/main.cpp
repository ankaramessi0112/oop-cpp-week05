#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many students?";
    cin >> n;

    if(n < 2 || n > 20) {
        cout << "Invalid number of students!" << endl;
        cout << "Please enter a number between 2 and 20";
    }
    
    else {
        for(int i = 0; i < n; i++)
        {
            cout << "Enter score for students: " << i + 1 << ": ";
            int score;
            cin >> score;
            if(score < 0 || score > 10)
            {
                cout << "Invalid input! Please enter a value between 0 and 10: ";
            }
            return 0;
        }
    }


    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    double scores[20];
    cout << "How many students?";
    cin >> n;

    if(n < 2 || n > 20) {
        cout << "Invalid number of students!" << endl;
        cout << "Please enter a number between 2 and 20";
    }
    
    else {
        for(int i = 0; i < n; i++)
        {
            cin >> scores[i];   
            if(scores[i] < 0 || scores[i] > 10)
            {
                cout << "Invalid input! Please enter a value between 0 and 10: ";
                i--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "==== STUDENT SCORES ====" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Student " << i + 1 << ": " << endl;
            cout << "Score: " << scores[i] << endl;
        }
    }

    return 0;
}

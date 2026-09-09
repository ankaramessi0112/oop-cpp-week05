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
        cout << n;
    }

    return 0;
}
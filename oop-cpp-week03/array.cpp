#include <iostream>
#include <string>
using namespace std;

const int n = 20; 
string names[n];
string ids[n];
string phones[n];
int main() {
    for(int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": " << names[i] << " - " << ids[i] << " - " << phones[i] << endl;
    }
}
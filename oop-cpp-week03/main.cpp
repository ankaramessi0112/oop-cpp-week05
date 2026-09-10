#include <iostream>
#include <string>
using namespace std;

int main() {
    const int N = 5; // Số lượng sinh viên
    
    string names[N];  // Mảng lưu tên
    string ids[N];    // Mảng lưu MSSV
    string phones[N]; // Mảng lưu SĐT
    // Sinh viên 1 (index 0)
    names[0] = "Nguyen Van A";
    ids[0]   = "23110001";
    phones[0]= "0901234567";

    // Sinh viên 2 (index 1)
    names[1] = "Tran Thi B";
    ids[1]   = "23110002";
    phones[1]= "0912345678";

     // Sinh viên 3 (index 2)
    names[2] = "Nguyen Tran C";
    ids[2]   = "23110003";
    phones[2]= "0901234667";


    // Sinh viên 4 (index 3)
    names[3] = "Nguyen Tri D";
    ids[3]   = "23110004";
    phones[3]= "0901236567";

    // Sinh viên 5 (index 4)
    names[4] = "Nguyen Van E";
    ids[4]   = "23110005";
    phones[4]= "0901237567";    

    cout << "Student 1: " << names[0] << " - " << ids[0] << " - " << phones[0] << endl;
    cout << "Student 2: " << names[1] << " - " << ids[1] << " - " << phones[1] << endl;
    cout << "Student 3: " << names[2] << " - " << ids[2] << " - " << phones[2] << endl;
    cout << "Student 4: " << names[3] << " - " << ids[3] << " - " << phones[3] << endl;
    cout << "Student 5: " << names[4] << " - " << ids[4] << " - " << phones[4] << endl;

    return 0;
}
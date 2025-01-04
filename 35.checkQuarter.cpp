// Kiểm tra tháng thuộc quý nào bằng C++

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Nhap thang (1-12): ";
    cin >> month;

    if (month >= 1 && month <= 3) {
        cout << "Thang " << month << " thuoc Quy 1." << endl;
    } else if (month >= 4 && month <= 6) {
        cout << "Thang " << month << " thuoc Quy 2." << endl;
    } else if (month >= 7 && month <= 9) {
        cout << "Thang " << month << " thuoc Quy 3." << endl;
    } else if (month >= 10 && month <= 12) {
        cout << "Thang " << month << " thuoc Quy 4." << endl;
    } else {
        cout << "Thang khong hop le!" << endl;
    }

    return 0;
}

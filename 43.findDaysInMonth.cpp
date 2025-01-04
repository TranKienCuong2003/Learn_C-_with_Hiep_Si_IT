// Chương trình tìm số ngày trong tháng bằng C++

#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Nhap thang (1-12): ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << "Thang " << month << " co 31 ngay." << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "Thang " << month << " co 30 ngay." << endl;
    } else if (month == 2) {
        // Kiểm tra năm nhuận
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << "Thang " << month << " co 29 ngay (Nam nhuan)." << endl;
        } else {
            cout << "Thang " << month << " co 28 ngay." << endl;
        }
    } else {
        cout << "Thang khong hop le!" << endl;
    }

    return 0;
}

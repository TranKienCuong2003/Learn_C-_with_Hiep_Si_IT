// Nhập vào ngày tháng năm rồi in ra ngày tiếp theo bằng C++

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    return 0; // Invalid month
}

int main() {
    int day, month, year;
    cout << "Nhap ngay (1-31): ";
    cin >> day;
    cout << "Nhap thang (1-12): ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    int daysInCurrentMonth = daysInMonth(month, year);
    
    if (day < 1 || day > daysInCurrentMonth || month < 1 || month > 12) {
        cout << "Ngay, thang, nam khong hop le!" << endl;
        return 0;
    }

    day++;

    if (day > daysInCurrentMonth) {
        day = 1;
        month++;

        if (month > 12) {
            month = 1;
            year++;
        }
    }

    cout << "Ngay tiep theo la: " << day << "/" << month << "/" << year << endl;
    return 0;
}

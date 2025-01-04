// In ra cách đọc của một số nguyên dương có hai chữ số bằng C++

#include <iostream>
using namespace std;

void readTens(int tens) {
    switch (tens) {
        case 1: cout << "Mười "; break;
        case 2: cout << "Hai mươi "; break;
        case 3: cout << "Ba mươi "; break;
        case 4: cout << "Bốn mươi "; break;
        case 5: cout << "Năm mươi "; break;
        case 6: cout << "Sáu mươi "; break;
        case 7: cout << "Bảy mươi "; break;
        case 8: cout << "Tám mươi "; break;
        case 9: cout << "Chín mươi "; break;
        default: break;
    }
}

void readUnits(int units) {
    switch (units) {
        case 1: cout << "một"; break;
        case 2: cout << "hai"; break;
        case 3: cout << "ba"; break;
        case 4: cout << "bốn"; break;
        case 5: cout << "năm"; break;
        case 6: cout << "sáu"; break;
        case 7: cout << "bảy"; break;
        case 8: cout << "tám"; break;
        case 9: cout << "chín"; break;
        case 0: cout << ""; break;
        default: break;
    }
}

int main() {
    int number;
    cout << "Nhap so nguyen duong co hai chu so: ";
    cin >> number;

    if (number < 10 || number > 99) {
        cout << "So khong hop le!" << endl;
        return 0;
    }

    int tens = number / 10;
    int units = number % 10;

    readTens(tens);
    readUnits(units);

    cout << endl;
    return 0;
}

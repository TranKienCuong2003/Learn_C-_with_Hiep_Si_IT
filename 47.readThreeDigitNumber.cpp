// In ra cách đọc của một số nguyên dương có ba chữ số bằng C++

#include <iostream>
using namespace std;

void readHundreds(int hundreds) {
    switch (hundreds) {
        case 1: cout << "Một trăm "; break;
        case 2: cout << "Hai trăm "; break;
        case 3: cout << "Ba trăm "; break;
        case 4: cout << "Bốn trăm "; break;
        case 5: cout << "Năm trăm "; break;
        case 6: cout << "Sáu trăm "; break;
        case 7: cout << "Bảy trăm "; break;
        case 8: cout << "Tám trăm "; break;
        case 9: cout << "Chín trăm "; break;
        default: break;
    }
}

void readTens(int tens) {
    switch (tens) {
        case 1: cout << "mười "; break;
        case 2: cout << "hai mươi "; break;
        case 3: cout << "ba mươi "; break;
        case 4: cout << "bốn mươi "; break;
        case 5: cout << "năm mươi "; break;
        case 6: cout << "sáu mươi "; break;
        case 7: cout << "bảy mươi "; break;
        case 8: cout << "tám mươi "; break;
        case 9: cout << "chín mươi "; break;
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
    cout << "Nhap so nguyen duong co ba chu so: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "So khong hop le!" << endl;
        return 0;
    }

    int hundreds = number / 100;
    int tens = (number % 100) / 10;
    int units = number % 10;

    readHundreds(hundreds);
    if (tens == 1) {
        cout << "mười ";
    } else {
        readTens(tens);
    }
    readUnits(units);

    cout << endl;
    return 0;
}

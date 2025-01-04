// Tìm chữ số lớn nhất của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, maxDigit = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        n /= 10;
    }
    cout << "Chu so lon nhat cua n la: " << maxDigit << endl;
    return 0;
}

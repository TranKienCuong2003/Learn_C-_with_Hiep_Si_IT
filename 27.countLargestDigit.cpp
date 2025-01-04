// Đếm chữ số lớn nhất của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, maxDigit = 0, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
            count = 1;
        } else if (digit == maxDigit) {
            count++;
        }
        n /= 10;
    }
    cout << "So luong chu so lon nhat (" << maxDigit << ") cua n la: " << count << endl;
    return 0;
}

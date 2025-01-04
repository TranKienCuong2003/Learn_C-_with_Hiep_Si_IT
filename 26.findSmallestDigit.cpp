// Tìm chữ số nhỏ nhất của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, minDigit = 9;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        n /= 10;
    }
    cout << "Chu so nho nhat cua n la: " << minDigit << endl;
    return 0;
}
// Đếm chữ số nhỏ nhất của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, minDigit = 9, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit < minDigit) {
            minDigit = digit;
            count = 1;
        } else if (digit == minDigit) {
            count++;
        }
        n /= 10;
    }
    cout << "So luong chu so nho nhat (" << minDigit << ") cua n la: " << count << endl;
    return 0;
}

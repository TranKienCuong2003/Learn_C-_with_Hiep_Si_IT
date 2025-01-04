// Tìm chữ số đầu tiên của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    while (n >= 10) {
        n /= 10;
    }
    cout << "Chu so dau tien cua n la: " << n << endl;
    return 0;
}

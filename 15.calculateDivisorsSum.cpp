// Tính tổng tất cả các “ước số” của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    cout << "Tong cac uoc so cua " << n << " la: " << tong << endl;
    return 0;
}
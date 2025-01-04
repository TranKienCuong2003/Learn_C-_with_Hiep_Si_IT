// Tính S(n) = x + x^2 + x^3 + … + x^n bằng C++

#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long tong = 0;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long power = 1;
        for (int j = 1; j <= i; j++) {
            power *= x;
        }
        tong += power;
    }
    cout << "S(n) = " << tong << endl;
    return 0;
}
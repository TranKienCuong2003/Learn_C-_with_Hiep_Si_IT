// Tính S(n) = 1^2 + 2^2 + … + n^2 bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tong += i * i;
    }
    cout << "S(n) = " << tong << endl;
    return 0;
}

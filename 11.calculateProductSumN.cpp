// Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    double tong = 0;
    long long tich = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tich *= i;
        tong += tich;
    }
    cout << "S(n) = " << tong << endl;
    return 0;
}

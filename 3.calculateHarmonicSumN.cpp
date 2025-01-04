// Tính S(n) = 1 + 1/2 + 1/3 + … + 1/n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    double tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tong += 1.0 / i;
    }
    cout << "S(n) = " << tong << endl;
    return 0;
}

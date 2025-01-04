// Tính S(n) = 1/2 + 2/3 + 3/4 + …. + n / (n + 1) bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    double tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tong += 1.0 * i / (i + 1);
    }
    cout << "S(n) = " << tong << endl;
    return 0;
}

// Tính S(n) = 1/2 + 3/4 + 5/6 + … + (2n + 1)/( 2n + 2) bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    double tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        tong += 1.0 * (2 * i + 1) / (2 * i + 2);
    }
    cout << "S(n) = " << tong << endl;
    return 0;
}

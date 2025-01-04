// Tính T(n) = 1 x 2 x 3…x N bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    long long tich = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    cout << "T(n) = " << tich << endl;
    return 0;
}

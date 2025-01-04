// Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n bằng C++

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, n;
    double sum = 0;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += pow(-1, i + 1) * pow(x, i);
    }

    cout << "S(x, n) = " << sum << endl;
    return 0;
}

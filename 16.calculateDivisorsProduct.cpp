// Tính tích tất cả các “ước số” của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    long long tich = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tich *= i;
        }
    }
    cout << "Tich cac uoc so cua " << n << " la: " << tich << endl;
    return 0;
}

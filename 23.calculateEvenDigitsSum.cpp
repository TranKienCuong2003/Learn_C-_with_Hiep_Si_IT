// Tính tổng các chữ số chẵn của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            sum += n % 10;
        }
        n /= 10;
    }
    cout << "Tong cac chu so chan cua n la: " << sum << endl;
    return 0;
}

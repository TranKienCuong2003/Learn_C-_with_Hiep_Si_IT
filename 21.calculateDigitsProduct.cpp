// Tính tích các chữ số của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    long long product = 1;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    cout << "Tich cac chu so cua n la: " << product << endl;
    return 0;
}

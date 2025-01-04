// Kiểm tra hai số thực có cùng dấu hay không bằng C++

#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Nhap so thuc a: ";
    cin >> a;
    cout << "Nhap so thuc b: ";
    cin >> b;

    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        cout << "Hai so thuc a va b co cung dau." << endl;
    } else if (a == 0 || b == 0) {
        cout << "Mot trong hai so thuc a va b la 0." << endl;
    } else {
        cout << "Hai so thuc a va b khong co cung dau." << endl;
    }

    return 0;
}

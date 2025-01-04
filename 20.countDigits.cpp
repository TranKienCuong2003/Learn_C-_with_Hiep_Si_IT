// Đếm số lượng chữ số của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        n /= 10;
        count++;
    }
    cout << "So luong chu so cua n la: " << count << endl;
    return 0;
}

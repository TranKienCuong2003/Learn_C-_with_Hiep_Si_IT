// Đếm số lượng chữ số lẻ của số nguyên dương n bằng C++

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        if ((n % 10) % 2 != 0) {
            count++;
        }
        n /= 10;
    }
    cout << "So luong chu so le cua n la: " << count << endl;
    return 0;
}

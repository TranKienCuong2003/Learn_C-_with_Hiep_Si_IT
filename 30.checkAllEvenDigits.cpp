// Kiểm tra số n có toàn chữ số chẵn hay không bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    bool allEven = true;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        if ((n % 10) % 2 != 0) {
            allEven = false;
            break;
        }
        n /= 10;
    }
    if (allEven) {
        cout << "Số n có toàn chữ số chẵn." << endl;
    } else {
        cout << "Số n không có toàn chữ số chẵn." << endl;
    }
    return 0;
}

// Kiểm tra số n có toàn chữ số lẻ hay không bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    bool allOdd = true;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            allOdd = false;
            break;
        }
        n /= 10;
    }
    if (allOdd) {
        cout << "Số n có toàn chữ số lẻ." << endl;
    } else {
        cout << "Số n không có toàn chữ số lẻ." << endl;
    }
    return 0;
}

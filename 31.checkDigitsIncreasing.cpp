// Kiểm tra các chữ số của số n có tăng dần từ trái sang phải không bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isIncreasing = true;
    cout << "Nhap n: ";
    cin >> n;
    int prevDigit = n % 10;
    n /= 10;

    while (n > 0) {
        int currDigit = n % 10;
        if (currDigit >= prevDigit) {
            isIncreasing = false;
            break;
        }
        prevDigit = currDigit;
        n /= 10;
    }

    if (isIncreasing) {
        cout << "Các chữ số của số n tăng dần từ trái sang phải." << endl;
    } else {
        cout << "Các chữ số của số n không tăng dần từ trái sang phải." << endl;
    }
    return 0;
}

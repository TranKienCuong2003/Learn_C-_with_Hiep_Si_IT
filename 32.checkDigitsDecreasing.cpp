// Kiểm tra các chữ số của số n có giảm dần hay không bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isDecreasing = true;
    cout << "Nhap n: ";
    cin >> n;
    int prevDigit = n % 10;
    n /= 10;

    while (n > 0) {
        int currDigit = n % 10;
        if (currDigit <= prevDigit) {
            isDecreasing = false;
            break;
        }
        prevDigit = currDigit;
        n /= 10;
    }

    if (isDecreasing) {
        cout << "Các chữ số của số n giảm dần." << endl;
    } else {
        cout << "Các chữ số của số n không giảm dần." << endl;
    }
    return 0;
}

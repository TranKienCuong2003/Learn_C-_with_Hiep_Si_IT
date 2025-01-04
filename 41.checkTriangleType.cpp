// Kiểm tra loại tam giác gì bằng C++

#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap 3 canh tam giac (a, b, c): ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Cac canh tam giac phai la so duong!" << endl;
    } else if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Khong phai tam giac!" << endl;
    } else {
        if (a == b && b == c) {
            cout << "Tam giac deu." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Tam giac can." << endl;
        } else {
            cout << "Tam giac vuong." << endl;
        }
    }
    return 0;
}

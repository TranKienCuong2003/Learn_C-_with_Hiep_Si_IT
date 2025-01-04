// Giải hệ phương trình bậc nhất hai ẩn bằng C++

#include <iostream>
using namespace std;

int main() {
    float a1, b1, c1, a2, b2, c2;
    cout << "Nhap he so a1, b1, c1 (a1*x + b1*y = c1): ";
    cin >> a1 >> b1 >> c1;
    cout << "Nhap he so a2, b2, c2 (a2*x + b2*y = c2): ";
    cin >> a2 >> b2 >> c2;

    float determinant = a1 * b2 - a2 * b1;
    
    if (determinant == 0) {
        cout << "He phuong trinh vo nghiem hoac vo so nghiem!" << endl;
    } else {
        float x = (c1 * b2 - c2 * b1) / determinant;
        float y = (a1 * c2 - a2 * c1) / determinant;
        cout << "Nghiem cua he phuong trinh la: x = " << x << ", y = " << y << endl;
    }

    return 0;
}

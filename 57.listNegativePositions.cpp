// Liệt kê vị trí các giá trị âm trong mảng một chiều các số thực bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    float arr[n];
    
    cout << "Nhap " << n << " phan tu cua mang (so thuc): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Vi tri cac gia tri am trong mang la: ";
    bool hasNegative = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << i << " ";
            hasNegative = true;
        }
    }

    if (!hasNegative) {
        cout << "Khong co gia tri am trong mang.";
    }

    cout << endl;

    return 0;
}

// Tính tổng các giá trị âm trong mảng một chiều các số thực bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    float arr[n];
    
    // Nhập mảng
    cout << "Nhap " << n << " phan tu cua mang (so thuc): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Tính tổng các giá trị âm
    float sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }

    cout << "Tong cac gia tri am trong mang la: " << sum << endl;

    return 0;
}

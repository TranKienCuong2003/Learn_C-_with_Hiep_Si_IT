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

    // Xuất mảng
    cout << "Mang vua nhap la: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Liệt kê các giá trị chẵn trong mảng các số nguyên bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    int arr[n];
    
    cout << "Nhap " << n << " phan tu cua mang (so nguyen): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Cac gia tri chan trong mang la: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

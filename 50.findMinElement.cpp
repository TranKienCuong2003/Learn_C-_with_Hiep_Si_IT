// Tìm phần tử nhỏ nhất trong mảng một chiều bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    int arr[n];
    cout << "Nhap " << n << " phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Phan tu nho nhat trong mang la: " << minElement << endl;
    return 0;
}

// Tìm phần tử lớn nhất trong mảng một chiều bằng C++

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

    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Phan tu lon nhat trong mang la: " << maxElement << endl;
    return 0;
}

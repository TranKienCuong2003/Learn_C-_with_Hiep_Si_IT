// Đếm số nguyên tố có trong mảng một chiều các số nguyên bằng C++

#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    int arr[n];
    
    // Nhập mảng
    cout << "Nhap " << n << " phan tu cua mang (so nguyen): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Đếm số nguyên tố trong mảng
    int primeCount = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    cout << "So luong so nguyen to trong mang la: " << primeCount << endl;

    return 0;
}

// Tính tổng các giá trị lẻ nguyên dương nhỏ hơn N bằng C++

#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Nhap N: ";
    cin >> N;

    for (int i = 1; i < N; i += 2) {
        sum += i;
    }

    cout << "Tong cac gia tri le nho hon N la: " << sum << endl;
    return 0;
}

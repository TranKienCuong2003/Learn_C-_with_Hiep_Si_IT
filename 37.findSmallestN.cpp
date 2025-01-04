// Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000 bằng C++

#include <iostream>
using namespace std;

int main() {
    int n = 1;
    long long sum = 0;

    while (sum <= 10000) {
        sum += n;
        n++;
    }

    cout << "So nguyen duong n nho nhat sao cho 1 + 2 + ... + n > 10000 la: " << n - 1 << endl;
    return 0;
}

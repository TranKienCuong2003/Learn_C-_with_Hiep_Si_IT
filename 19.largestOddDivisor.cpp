#include <iostream>
using namespace std;

int main() {
    int n;
    int maxOddDivisor = -1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            maxOddDivisor = i;
        }
    }
    cout << "Uoc so le lon nhat cua " << n << " la: " << maxOddDivisor << endl;
    return 0;
}

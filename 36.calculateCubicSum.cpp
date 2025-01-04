// Tính S(n) = 1^3 + 2^3 + … + N^3 bằng C++

#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    cout << "S(n) = " << sum << endl;
    return 0;
}

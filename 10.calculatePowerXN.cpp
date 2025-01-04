#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long ketqua = 1;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ketqua *= x;
    }
    cout << "T(x, n) = " << ketqua << endl;
    return 0;
}

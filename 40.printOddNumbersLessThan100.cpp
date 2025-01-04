// In tất cả các số nguyên dương lẻ nhỏ hơn 100 bằng C++

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i < 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// Tính điểm trung bình của môn toán và môn văn bằng C++

#include <iostream>
using namespace std;

int main() {
    float mathScore, literatureScore, averageScore;
    
    cout << "Nhap diem mon Toan: ";
    cin >> mathScore;
    cout << "Nhap diem mon Van: ";
    cin >> literatureScore;

    averageScore = (mathScore + literatureScore) / 2;

    cout << "Diem trung binh cua mon Toan va mon Van la: " << averageScore << endl;
    return 0;
}

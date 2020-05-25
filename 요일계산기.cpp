#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


int d;
int m;
int y;


string weekday(int d, int m, int y) {
    int LeapYears = (int)y / 4;
    long a = (y - LeapYears) * 365 + LeapYears * 366;
    if (m >= 2) a += 31;
    if (m >= 3 && (int)y / 4 == y / 4) a += 29;
    else if (m >= 3) a += 28;
    if (m >= 4) a += 31;
    if (m >= 5) a += 30;
    if (m >= 6) a += 31;
    if (m >= 7) a += 30;
    if (m >= 8) a += 31;
    if (m >= 9) a += 31;
    if (m >= 10) a += 30;
    if (m >= 11) a += 31;
    if (m == 12) a += 30;
    a += d;
    int b = (a - 2) % 7;
    switch (b) {
    case 0:
        return "������";
    case 1:
        return "ȭ����";
    case 2:
        return "������";
    case 3:
        return "�����";
    case 4:
        return "�ݿ���";
    case 5:
        return "�����";
    case 6:
        return "�Ͽ���";
    default:
        return "Error";
    }
}

int main() {
    cin >> d >> m >> y;
    cout << weekday(d, m, y);
}
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
        return "월요일";
    case 1:
        return "화요일";
    case 2:
        return "수요일";
    case 3:
        return "목요일";
    case 4:
        return "금요일";
    case 5:
        return "토요일";
    case 6:
        return "일요일";
    default:
        return "Error";
    }
}

int main() {
    cin >> d >> m >> y;
    cout << weekday(d, m, y);
}
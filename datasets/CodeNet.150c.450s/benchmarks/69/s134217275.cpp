#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int BALL_NUM = 10;

int ball[BALL_NUM];

bool IsLeft(int num, int left, int right) {
    if (left > num) { return false; }
    if (left > right || right > num) { return true; }
    else { return false; }
}

bool Simulate() {
    int left = 0, right = 0;
    bool flag = true;
    for (int j = 0; j < BALL_NUM; j++) {
        if (ball[j] < min(left, right)) {
            flag = false;
            break;
        }
        if (IsLeft(ball[j], left, right)) { left = ball[j]; }
        else { right = ball[j]; }
    }
    return flag;
}

int main() {
    long n;
    scanf("%ld", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < BALL_NUM; j++) {
            scanf("%d", &ball[j]);
        }
        if (Simulate()) { printf("%s\n", "YES"); }
        else { printf("%s\n", "NO"); }
    }
 
    return 0;
}
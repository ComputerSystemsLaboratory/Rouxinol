#include <cstdio>
#include <algorithm>

using namespace std;

const int BALL_NUM = 10;

int ball[BALL_NUM];

bool dfs(int i, int left, int right) {
    if (i == BALL_NUM) { return true; }
    bool ans = false;
    if (left < ball[i]) {
        ans = dfs(i + 1, ball[i], right);
    }
    if (right < ball[i]) {
        ans = dfs(i + 1, left, ball[i]);
    }
    return ans;
}

int main() {
    long n;
    scanf("%ld", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < BALL_NUM; j++) {
            scanf("%d", &ball[j]);
        }
        if (dfs(0, 0, 0)) { printf("%s\n", "YES"); }
        else { printf("%s\n", "NO"); }
    }

    return 0;
}
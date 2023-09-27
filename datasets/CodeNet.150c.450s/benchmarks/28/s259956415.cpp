#include <iostream>
using namespace std;

#define MAX 100000
typedef long long llong;
int num{ 1 }, truck{ 1 };
llong T[MAX];

int check(llong P) {
    int count = 0;
    for (int j = 0; j < truck; j++) {
        llong s = 0;
        while (s + T[count] <= P) {
            s += T[count];
            count++;
            if (count == num) return num;
        }
    }
    return count;
}

llong solve(int count, int maxw) {
    llong left{ 0 }, right{ count * maxw };

    while (right - left > 1) {
        llong mid = (left + right) / 2;
        int volume = check(mid);
        if (volume >= num) right = mid;
        else left = mid;
    }

    return right;
}

int main()
{
    scanf("%d %d", &num, &truck);
    int maxw = 1;
    for (int i = 0; i < num; i++) {
        int w = 0;
        scanf("%d", &w);
        T[i] = w;
        if (maxw <= w) maxw = w;
    }

    llong ans = solve(num, maxw);
    cout << ans << "\n";
}

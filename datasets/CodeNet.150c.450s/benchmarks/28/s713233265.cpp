//
// Created by Nivras on 2017/5/16.
//

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int MAXN = 110000;

long long weight[MAXN];

bool check(const long long load, const long long carNum, const long long goodNum) {
    int cnt = 0;
    for (int i = 0; i < carNum; i++) {
        int nowWeight = 0;
        while (nowWeight + weight[cnt] <= load) {
            nowWeight += weight[cnt];
            cnt++;
            if (cnt == goodNum) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    long long int n, k;
    scanf("%lld%lld", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &weight[i]);
    }

    long long left = 0;
    long long right = 10000 * 100000;
    long long mid;
    while (right - left > 1) {
        mid = (left + right) / 2;
        if (check(mid, k, n)) {
            right = mid;
        }
        else {
            left = mid;
        }
    }
    printf("%lld\n", right);

    return 0;
}
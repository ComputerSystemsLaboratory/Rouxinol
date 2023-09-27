#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int MAX = 100000;
int n, k;
vector<int> w(MAX);

// 積載量pの時必要なトラックの台数
// int t(int p) {
//     int track = 0, sum = 0;
//     rep(i, n) {
//         if (w[i] > p) {
//             return 0;
//         }
//         if (sum + w[i] <= p) {
//             sum += w[i];
//         } else {
//             sum = w[i];
//             track++;
//         }
//     }
//     return ++track;
// }

// 積載量pのトラックk台で積める荷物の個数
int c(int p) {
    int item = 0;
    rep(i, k) {
        int sum = 0;
        while (sum + w[item] <= p) {
            sum += w[item];
            item++;
            if (item == n) return n;
        }
    }
    return item;
}

int main() {
    scanf("%d %d", &n, &k);
    int max_w = 0, sum_w = 0;
    rep(i, n) {
        scanf("%d", &w[i]);
        max_w = max(max_w, w[i]);
        sum_w += w[i];
    }
    int left = 0, right = sum_w;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (c(mid) == n) {
            if (c(mid - 1) < n) {
                printf("%d\n", mid);
                break;
            } else {
                right = mid - 1;
            }
        } else if (c(mid) < n) {
            left = mid + 1;
        }
    }
    // for (int i = 0; i <= sum_w; i++) {
    //     // printf("%d %d\n", i, c(i));
    //     if (c(i) == n) {
    //         printf("%d\n", i);
    //         break;
    //     }
    // }
}

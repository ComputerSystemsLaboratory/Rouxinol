#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
static const int MAX = 100001;
int arr[MAX];

int main() {

    int N, k;
    long long global_max, current_max;
    for (; ;) {
        scanf("%d %d", &N, &k);
        if (N == 0 && k == 0) break;
        current_max = 0;
        for (int i = 0; i < k; i++) {
            scanf("%d", &arr[i]);
            current_max += arr[i];
        }
        global_max = current_max;
        for (int i = k; i < N; i++) {
            std::scanf("%d", &arr[i]);
            current_max += arr[i] - arr[i-k];
            global_max = max(global_max, current_max);
        }
        std::cout << global_max << std::endl;
    }
    return 0;
}


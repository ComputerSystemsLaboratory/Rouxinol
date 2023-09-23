// AOJ 0022 "Maximum Sum Sequence"(最大連続部分和) (パソコン甲子園 2003 本選 問題 026)
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    while (true) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        
        int maxSum = -100000;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int an;
            scanf("%d", &an);
            sum += an;
            maxSum = max(maxSum, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        printf("%d\n", maxSum);
    }
    
    return 0;
}
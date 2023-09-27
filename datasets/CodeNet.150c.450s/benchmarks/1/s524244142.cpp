//
// Created by 李青坪 on 2018/12/30.
//

#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#define MAXN 100001
#define NIL -1
#define INIFITY 1 << 30
using namespace std;

int n;
int len = 1;
int L[MAXN];
vector<int> A;

void longetIncreasingSubsequence(){
    fill(L, L+n+1, 0);
    L[0] = A[0];
    for (int i = 0; i < n; ++i) {
        if (L[len-1] < A[i]){
            L[len++] = A[i];
        } else {
            int *j = lower_bound(L, L+len, A[i]);
            *j = A[i];
        }
    }
}

int main(){
    scanf("%d", &n);
    int a;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a);
        A.push_back(a);
    }
    longetIncreasingSubsequence();
//    for (int i = 0; i < len; ++i) {
//        printf("%d ", L[i]);
//    }
    printf("%d\n", len);
}

/*
8
5 3 1 4 8 2 9 11
 */

#include <bits/stdc++.h>

#define MAXC 10000
#define MAXR 10
int arr[MAXR][MAXC], arr2[MAXR][MAXC], tempA[MAXR][MAXC];
int R, C;
int maxv;

void copyArr(int chk[]) {
    for (int i = 0; i < R; i++) {
        if (chk[i] == 0) {
            for (int j = 0; j < C; j++) {
                tempA[i][j] = arr[i][j];
            }
        } else{
            for (int j = 0; j < C; j++) {
                tempA[i][j] = arr2[i][j];
            }
        }
    }
}

int getRes(int chk[]) {
    copyArr(chk);
    int sum = 0, res = 0;
    for (int i = 0; i < C; i++) {
        sum = 0;
        for (int j = 0; j < R; j++) {
            if (tempA[j][i] == 1) sum++;
        }
        if (sum > R/2) res += sum;
        else res += R - sum;
    }
    return  res;
}

int solve(int chk[], int idx) {
    if (idx == R) return getRes(chk);
    int tempchk1[R], tempchk2[R];
    for (int i = 0; i < R; i++) {
        tempchk1[i] = tempchk2[i] = chk[i];
    }
    tempchk2[idx] = 1;
    return std::max(solve(tempchk1, idx+1), solve(tempchk2, idx+1));
}

int main()
{
    int tmp;
    while(1) {
        std::cin >> R >> C;
        if (R == 0 && C == 0) break;
        int chk[R];
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                std::cin >> tmp;
                arr[i][j] = tmp;
                arr2[i][j] = tmp ^ 1;
            }
            chk[i] = 0;
        }
        std::cout << solve(chk, 0) << std::endl;
    }
    return 0;
}


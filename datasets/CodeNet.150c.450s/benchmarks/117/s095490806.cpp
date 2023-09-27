//
// Created by Nivras on 2017/5/25.
//

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int MAXN = 550000;
const int INF = 1000000007;

int cnt = 0;
int leftNum[MAXN], rightNum[MAXN];
int num[MAXN];

void merge(int num[], int left, int mid, int right) {
    for (int i = 0; i < mid - left; i++) {
        leftNum[i] = num[left + i];
    }
    leftNum[mid - left] = INF;

    for (int i = 0; i < right - mid; i++) {
        rightNum[i] = num[mid + i];
    }
    rightNum[right - mid] = INF;

    int leftpre = 0;
    int rightpre = 0;
    for (int i = 0; i < right - left; i++) {
        cnt++;
        if (leftNum[leftpre] <= rightNum[rightpre]) {
            num[left + i] = leftNum[leftpre];
            leftpre++;
        }
        else {
            num[left + i] = rightNum[rightpre];
            rightpre++;
        }
    }
}

void mergeSort(int num[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(num, left, mid);
        mergeSort(num, mid, right);
        merge(num, left, mid, right);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    cnt = 0;
    mergeSort(num, 0, n);

    for (int i = 0; i < n; ++i) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", num[i]);
    }
    puts("");
    printf("%d\n", cnt);

    return 0;
}
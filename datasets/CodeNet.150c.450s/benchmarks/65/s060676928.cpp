#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

struct Node {
    char c;
    int v;
};

void bubbleSort(Node a[], int N) {
    bool flag = true;
    for (int i = 0; flag; i++) {
        flag = false;
        for (int j = N-1; j > i; j--) {
            if (a[j-1].v > a[j].v) {
                swap(a[j-1].c, a[j].c);
                swap(a[j-1].v, a[j].v);
                flag = true;
            }
        }
    }
}

void selectionSort(Node a[], int N) {
    for (int i = 0; i < N; i++) {
        int mi = i;
        for (int j = i + 1; j < N; j++) {
            if (a[j].v < a[mi].v) {
                mi = j;
            }
        }
        swap(a[i].v, a[mi].v);
        swap(a[i].c, a[mi].c);
    }
}

bool isStable(Node a1[], Node a2[], int N) {
    for (int i = 0; i < N; i++) {
        if (a1[i].c != a2[i].c) {
            return false;
        }
    }
    return true;
}

void print(Node a[], int N) {
    for (int i = 0; i < N; i++) {
        if (i > 0) printf(" ");
        printf("%c%d", a[i].c, a[i].v);
    }
    printf("\n");
}

const int MAX = 50;
int n;
Node a1[MAX];
Node a2[MAX];

int main() {
    //freopen("in.txt", "r", "stdin");
    //freopen("out.txt", "w", "stdout");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[10];
        scanf("%s", s);
        a1[i].c = a2[i].c = s[0];
        a1[i].v = a2[i].v = s[1] - '0';
    }
    bubbleSort(a1, n);
    print(a1, n);
    printf("Stable\n");
    selectionSort(a2, n);
    print(a2, n);
    if (isStable(a1, a2, n)) {
        printf("Stable\n");
    } else {
        printf("Not stable\n");
    }
    return 0;
}
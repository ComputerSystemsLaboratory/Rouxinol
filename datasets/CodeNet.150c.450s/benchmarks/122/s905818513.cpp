#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

#define par(x) ((x)>>(1))
#define lc(x) ((x)<<(1))
#define rc(x) ((x)<<(1)|1)

const int MAX = 2000010;
int heap[MAX];
int len;
char cmd[10];

void shiftUp(int p) {
    int parent = par(p);
    if (parent>=1 && heap[parent]<heap[p]) {
        swap(heap[parent], heap[p]);
        shiftUp(parent);
    }
}

void shiftDown(int p) {
    int l = lc(p);
    int r = rc(p);
    int largest = p;
    if (l <= len && heap[l] > heap[p]) {
        largest = l;
    }
    if (r <= len && heap[r] > heap[largest]) {
        largest = r;
    }
    if (largest != p) {
        swap(heap[largest], heap[p]);
        shiftDown(largest);
    }
}

void insert(int x) {
    heap[++len] = x;
    shiftUp(len);
}

int pop() {
    int x = heap[1];
    swap(heap[1], heap[len]);
    len--;
    if (len > 0) {
        shiftDown(1);
    }
    return x;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    len = 0;
    while (~scanf("%s", cmd)) {
        if (strcmp(cmd, "insert") == 0) {
            int num = 0;
            scanf("%d", &num);
            insert(num);
        } else if (strcmp(cmd, "extract") == 0) {
            printf("%d\n", pop());
        } else if (strcmp(cmd, "end") == 0) {
            break;
        }
    }
    return 0;
}
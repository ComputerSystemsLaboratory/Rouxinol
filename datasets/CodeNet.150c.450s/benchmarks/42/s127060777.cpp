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

const int MAX = 100010;
struct Node {
    char s[10];
    int v;
};

Node Queue[MAX];
int len;
int head;
int last;

void init() {
    len = head = last = 0;
}

void push(Node node) {
    strcpy(Queue[last].s, node.s);
    Queue[last].v = node.v;
    len++;
    last = (last + 1) % MAX;
}

Node front() {
    return Queue[head];
}

void pop() {
    len--;
    head = (head + 1) % MAX;
}

int n;
int tm;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    scanf("%d %d", &n, &tm);
    init();
    for (int i = 0; i < n; i++) {
        char s[10];
        Node node;
        scanf("%s %d", node.s, &node.v);
        push(node);
    }
    int tt = 0;
    while (len > 0) {
        Node node = front();
        pop();
        if (node.v <= tm) {
            tt += node.v;
            node.v = 0;
        } else {
            tt += tm;
            node.v -= tm;
        }
        if (node.v <= 0) {
            printf("%s %d\n", node.s, tt);
        } else {
            push(node);
        }
    }
    return 0;
}
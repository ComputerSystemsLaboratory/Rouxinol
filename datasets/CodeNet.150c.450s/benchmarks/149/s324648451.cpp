#include <iostream>
using namespace std;
#define MAX 10005

struct Node {
    int v, p, h;
};

Node node[MAX];

int findSet(int x) {
    int now, p, result;
    now = x;
    p = node[now].p;
    while (now != p) {
        now = p;
        p = node[now].p;
    }
    result = p;
    p = x;
    while (p != result) {
        now = p;
        p = node[now].p;
        node[now].p = result;
    }
    return result;
}

void unite(int x, int y) {
    int a = findSet(x);
    int b = findSet(y);
    if (a == b) return;
    if (node[a].h > node[b].h) {
        node[b].p = a;
    } else if (node[a].h < node[b].h) {
        node[a].p = b;
    } else {
        node[b].p = a;
        node[a].h++;
    }
}

int main(void) {
    int n, p, com, x, y;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        node[i].v = i;
        node[i].p = i;
        node[i].h = 0;
    }
    while (p--) {
        cin >> com >> x >> y;
        if (com == 0) {
            unite(x, y);
        } else {
            if (findSet(x) == findSet(y)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
}

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

int n, tim;
struct Node {
    char s[10];
    int v;
};
queue<Node> Q;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    scanf("%d %d", &n, &tim);
    for (int i = 0; i < n; i++) {
        Node node;
        scanf("%s %d", node.s, &node.v);
        Q.push(node);
    }
    int tmp = 0;
    while (!Q.empty()) {
        Node node = Q.front();
        Q.pop();
        if (node.v <= tim) {
            tmp += node.v;
            printf("%s %d\n", node.s, tmp);
        } else {
            tmp += tim;
            node.v -= tim;
            Q.push(node);
        }
    }
    return 0;
}
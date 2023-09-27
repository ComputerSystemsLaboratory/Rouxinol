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


struct Node {
    int v;
    Node* l;
    Node* r;
};

Node* root = NULL;

void insert(int v) {
    if (!root) {
        root = new Node;
        root -> v = v;
        root -> l = NULL;
        root -> r = NULL;
        return;
    }

    Node* par = NULL;
    Node* x = root;
    while (x) {
        par = x;
        if (v < x -> v) {
            x = x -> l;
        } else {
            x = x -> r;
        }
    }
    if (v < par->v) {
        par -> l = new Node;
        Node* p = par -> l;
        p -> v = v;
        p -> l = NULL;
        p -> r = NULL;
    } else {
        par -> r = new Node;
        Node* p = par -> r;
        p -> v = v;
        p -> l = NULL;
        p -> r = NULL;
    }
}

void preOrder(Node* root) {
    if (root == NULL) return ;
    printf(" %d", root -> v);
    preOrder(root -> l);
    preOrder(root -> r);
}

void inOrder(Node* root) {
    if (root == NULL) return ;
    inOrder(root -> l);
    printf(" %d", root -> v);
    inOrder(root -> r);
}


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    int num;
    char s[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        if (s[0] == 'i') {
            scanf("%d", &num);
            insert(num);
        } else if (s[0] == 'p') {
            inOrder(root);
            printf("\n");
            preOrder(root);
            printf("\n");
        }
    }
    return 0;
}
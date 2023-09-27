#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string>
#define NIL -2000000001 
using namespace std;

long long middlePrintT[500005];
long long firstPrintT[500005];
int mcount = 0;
int fcount = 0;

struct Node {
    long long key;
    Node *p, *r, *l;
};

Node *nil, *root;

void init() {
    nil = (Node *)malloc(sizeof(Node));
    nil->key = NIL;
    nil->l = nil;
    nil->r = nil;
    root = nil;
}

void insert(long long k) {
    Node *z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->l = nil;
    z->r = nil;
    Node *y = nil;  // xの親
    Node *x = root;

    while (x != nil) {
        y = x;  // 親を設定
        if (z->key < x->key) x = x->l;  // 左の子へ移動
        else x = x->r;  // 右の子へ移動
    }

    z->p = y;

    if (y == nil) root = z;
    else if (z->key < y->key) y->l = z; // zをyの左の子にする
    else y->r = z;  // zをyの右の子にする
}

void middlePrint(Node *u) {
    if (u == nil) return;
    middlePrint(u->l);
    middlePrintT[mcount++] = u->key;
    middlePrint(u->r);
}

void firstPrint(Node *u) {
    if (u == nil) return;
    firstPrintT[fcount++] = u->key;
    firstPrint(u->l);
    firstPrint(u->r);
}

int main() {
    init();
    int m;
    long long key;
    string command;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> command;
        if (command[0] == 'i') {
            cin >> key;
            insert(key);
        }
        else if (command[0] == 'p') {
            mcount = fcount = 0;
            middlePrint(root);
            firstPrint(root);
            for (int j = 0; j < mcount; j++) cout << " " << middlePrintT[j];
            cout << "\n";
            for (int j = 0; j < fcount; j++) cout << " " << firstPrintT[j];
            cout << "\n";
        }
    }

    return 0;
}

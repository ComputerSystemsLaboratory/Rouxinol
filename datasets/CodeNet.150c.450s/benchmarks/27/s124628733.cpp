#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

const int NIL = -1;
struct Node {
    int left;
    int right;
};

Node T[500000];
int root = NIL;

void printInOrder(int i) {
    if (i == NIL) {
        return;
    }
    printInOrder(T[i].left);
    printf(" %d", i);
    printInOrder(T[i].right);
}

void printPreOrder(int i) {
    if (i == NIL) {
        return;
    }
    printf(" %d", i);
    printPreOrder(T[i].left);
    printPreOrder(T[i].right);
}

void insert(int i) {
    //??°???????????\???????????????????????????NIL
    T[i].left = T[i].right = NIL;
    //??????????????£???
    if (root == NIL) {
        root = i;
        return;
    }
    //x??§dig??????
    int y;
    int x = root;
    while (x != NIL) {
        y = x;
        if (i < x) {
            x = T[x].left;
        }
        else {
            x = T[x].right;
        }
    }
    if (i < y) {
        T[y].left = i;
    }
    else {
        T[y].right = i;
    }
}

int main() {
    int n;
    cin >> n;

    string com;
    int key;
    for (int i = 0; i < n; i++) {
        cin >> com;
        if (com == "insert") {
            cin >> key;
            insert(key);
        }
        else {
            printInOrder(root);
            printf("\n");
            printPreOrder(root);
            printf("\n");
        }
    }

    return 0;
}
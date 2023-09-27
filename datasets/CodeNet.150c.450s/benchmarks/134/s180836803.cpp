#include <iostream>
using ll = long long;
using namespace std;

/* initialize */
struct Node{int p, l, r;};
struct Node T[10000];
int n;
void preorder(int v){
    if(v == -1) return;
    printf(" %d", v);
    preorder(T[v].l);
    preorder(T[v].r);
};

void inorder(int v){
    if(v == -1) return;
    inorder(T[v].l);
    printf(" %d", v);
    inorder(T[v].r);
};

void postorder(int v){
    if(v == -1) return;
    postorder(T[v].l);
    postorder(T[v].r);
    printf(" %d", v);
};

int main() {
    int v, l, r;
    int root = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        T[i].p = -1;
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d", &v, &l, &r);
        T[v].l = l;
        T[v].r = r;
        if (l != -1) T[l].p = v;
        if (r != -1) T[r].p = v;
    }
    for (int j = 0; j < n; ++j) {
        if(T[j].p == -1) root = j;
    }
    printf("Preorder\n");
    preorder(root);
    printf("\n");
    printf("Inorder\n");
    inorder(root);
    printf("\n");
    printf("Postorder\n");
    postorder(root);
    printf("\n");

    return 0;
}

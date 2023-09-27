#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,s,n) for(int i=s;i<n;i++)

struct Node {
    int p, bro, l, r;
    bool ok;
};
Node u[26];
int n;
int pre, ino, pos;
void preorder(int node){
    if(pre == n){
        printf("\n");
        rep(i,n)u[i].ok = 0;
        return ;
    }

    if(!u[node].ok){
        //cout << "x";
        printf(" %d", node);
        u[node].ok = 1;
        pre++;
    }
    int left = u[node].l, right = u[node].r;
    if(left != -1 && !u[left].ok){
        //cout << "y";
        preorder(u[node].l);
    }
    else if(right != -1 && !u[right].ok){
        preorder(u[node].r);
    }
    else if(u[node].p != -1)preorder(u[node].p);
    else {
        printf("\n");
        rep(i,n)u[i].ok = 0;
        return;
    }
}
void inorder(int node){
    if(ino == n){
        rep(i,n)u[i].ok = 0;
        return;
    }

    if(u[node].l != -1 && !u[u[node].l].ok)inorder(u[node].l);
    else if(u[node].r != -1 && !u[u[node].r].ok){
        printf(" %d", node);
        u[node].ok = 1;
        ino++;
        inorder(u[node].r);
    }
    else {
        if(!u[node].ok){
            printf(" %d", node);
            u[node].ok = 1;
            ino++;
        }

        if(u[node].p != -1)inorder(u[node].p);
        else {
            rep(i,n)u[i].ok = 0;
            return;
        }
    }
}
void postorder(int node){
    if(pos == n){
        printf("\n");
        return;
    }
    if(u[node].l != -1 && !u[u[node].l].ok)postorder(u[node].l);
    else if(u[node].r != -1 && !u[u[node].r].ok)postorder(u[node].r);
    else if(u[node].bro != -1){
        printf(" %d", node);
        u[node].ok = 1;
        pos++;
        if(!u[u[node].bro].ok)postorder(u[node].bro);
        else postorder(u[node].p);
    }
    else {
        printf(" %d", node);
        u[node].ok = 1;
        pos++;
        if(u[node].p != -1)postorder(u[node].p);
        else {
            printf("\n");
            return;
        }
    }
}
int main(){
    cin >> n;
    rep(i,n){
        u[i].p = u[i].bro = -1;
        u[i].ok = 0;
    }

    rep(i,n){
        int id, left, right;
        cin >> id >> left >> right;
        u[id].l = left;
        u[id].r = right;
        if(left != -1){
            u[left].p = id;
            u[left].bro = right;
        }
        if(right != -1){
            u[right].bro = left;
            u[right].p = id;
        }
    }

    int root;
    rep(i,n)if(u[i].p == -1)root = i;

    printf("Preorder\n");
    preorder(root);
    printf("Inorder\n");
    inorder(root);
    printf("\n");
    printf("Postorder\n");
    postorder(root);

    return 0;
}

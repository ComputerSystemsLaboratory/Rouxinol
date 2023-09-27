#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n+1); ++i)
using namespace std;
using ll = long long;
// const int INF = +100100100;
typedef pair<int,int> P;

#define MAX 10001
#define NIL  -1

struct Node{
    int l,r,p;
};
Node T[MAX];


vector<int> PRE;
void preoder(int i){
    PRE.push_back(i);
    if(T[i].l==NIL&&T[i].r==NIL)return;
    if(T[i].l!=NIL){
        preoder(T[i].l);
    }
    if(T[i].r!=NIL){
        preoder(T[i].r);
    }
}

vector<int> INO;
void inorder(int i){
    // if(T[i].l==NIL)INO.push_back(i);
    if(T[i].l==NIL && T[i].r==NIL){
        INO.push_back(i);
        return;
    }
    if(T[i].l!=NIL)inorder(T[i].l);
    INO.push_back(i);
    if(T[i].r!=NIL)inorder(T[i].r);
}

vector<int> POS;
void postoder(int i){
    if(T[i].l==NIL&&T[i].r==NIL){
        POS.push_back(i);
        return;
    }
    if(T[i].l!=NIL)postoder(T[i].l);
    if(T[i].r!=NIL)postoder(T[i].r);
    POS.push_back(i);
}

int main(){
    int n;
    cin >> n;
    rep(i,n)T[i].l=T[i].p=T[i].r=NIL;
    // 木の作成
    rep(i,n){
        int v,l,r;
        cin >> v>> l>>r;
        T[v].l=l; T[v].r=r;
        if(l!=-1){
            T[l].p=v;
        }
        if(r!=-1){
            T[r].p=v;
        }   
    }
    int parent;
    rep(i,n)if(T[i].p==NIL)parent=i;
    preoder(parent);
    inorder(parent);
    postoder(parent);
    cout<<"Preorder"<<endl;
    rep(i,n){
        // if(i==0)cout<<PRE[i];
        // else cout << " "<<PRE[i];
        cout <<" "<< PRE[i];
    }
    cout<<endl;
    cout<<"Inorder"<<endl;
    rep(i,n){
        // if(i==0)cout<<INO[i];
        // else cout << " "<<INO[i];
        cout <<" "<< INO[i];
    }
    cout<<endl;
    cout<<"Postorder"<<endl;
    rep(i,n){
        // if(i==0)cout<<POS[i];
        // else cout << " "<<POS[i];
        cout <<" "<< POS[i];
    }
    cout<<endl;
    return 0;
}

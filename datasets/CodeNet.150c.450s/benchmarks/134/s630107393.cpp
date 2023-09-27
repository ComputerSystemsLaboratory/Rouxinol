#include <bits/stdc++.h>
//#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,a,b) for(int i=a;i<b;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define vi vector<int>
#define pb push_back
#define pi pair<int,int>
#define vp vector<pair<int,int> >
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;

struct Node{
    int p,l,r;
};

Node t[25];

void preorder(int v){
    if(v==-1)return;
    cout<<" "<<v;
    preorder(t[v].l);
    preorder(t[v].r);
}

void inorder(int v){
    if(v==-1)return;
    inorder(t[v].l);
    cout<<" "<<v;
    inorder(t[v].r);
}

void postorder(int v){
    if(v==-1)return;
    postorder(t[v].l);
    postorder(t[v].r);
    cout<<" "<<v;
}

signed main(){
    int n;
    cin>>n;
    rep(i,n)t[i].p=-1;
    rep(i,n){
        int id,l,r;
        cin>>id>>l>>r;
        t[id].l=l;
        t[id].r=r;
        if(l!=-1)t[l].p=id;
        if(r!=-1)t[r].p=id;
    }
    
    int root;
    rep(i,n)if(t[i].p==-1)root=i;
    cout<<"Preorder"<<endl;
    preorder(root);
    cout<<endl<<"Inorder"<<endl;
    inorder(root);
    cout<<endl<<"Postorder"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using Graph=vector<vector<int> >;
Graph G(25);
void pre(int n){
    if(n==-1)return;
    cout <<" "<<n;
    for(int k:G[n]){
        pre(k);
    }
}
void in(int n){
    if(n==-1)return;
    in(G[n][0]);
    cout << " "<<n;
    in(G[n][1]);
}
void post(int n){
    if(n==-1)return;
    for(int k:G[n]){
        post(k);
    }
    cout <<" "<< n;
}



int main()
{
    int n;cin >>n;
    bool c[n];
    for(int i=0;i<n;i++){
        c[i]=true;
    }
    for(int i=0;i<n;i++){
        int id,left,right;
        cin >>id >>left>>right;
        G[id].push_back(left);
        G[id].push_back(right);
        c[left]=false;
        c[right]=false;
    }
    int f;
    for(int i=0;i<n;i++)if(c[i])f=i;
    cout << "Preorder"<< endl;
    pre(f);cout << endl;
    cout << "Inorder"<< endl;
    in(f);cout << endl;
    cout << "Postorder"<< endl;
    post(f);cout << endl;
    return 0;
}


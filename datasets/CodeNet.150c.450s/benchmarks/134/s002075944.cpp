#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

void preorder(ll n, vector<vector<ll>> tree, ll root){
    cout<<"Preorder"<<endl;
    stack<ll> st;
    st.push(root);
    vector<ll> res;
    while(!st.empty()){
        ll x=st.top();
        st.pop();
        res.push_back(x);
        rep(y, 2){
            if(tree[x][1-y]!=-1) st.push(tree[x][1-y]);
        }
    }
    rep(i,n){
        cout<<' ';
        cout<<res[i];
    }
    cout<<endl;
}

void inorder(ll n, vector<vector<ll>> tree, ll root){
    cout<<"Inorder"<<endl;
    stack<ll> st;
    st.push(root);
    vector<ll> res;
    while(!st.empty()){
        ll x=st.top();
        st.pop();
        if(tree[x][0]==-1 && tree[x][1]==-1){
            res.push_back(x);
        }else{
            if(tree[x][1]!=-1) st.push(tree[x][1]);
            st.push(x);
            if(tree[x][0]!=-1) st.push(tree[x][0]);
            tree[x][0]=-1; tree[x][1]=-1;
        }
    }
    rep(i,n){
        cout<<' ';
        cout<<res[i];
    }
    cout<<endl;
}

void postorder(ll n, vector<vector<ll>> tree, ll root){
    cout<<"Postorder"<<endl;
    stack<ll> st;
    st.push(root);
    vector<ll> res;
    while(!st.empty()){
        ll x=st.top();
        if(tree[x][0]==-1 && tree[x][1]==-1){
            res.push_back(x);
            st.pop();
        }else{
            rep(y, 2){
                if(tree[x][1-y]!=-1) st.push(tree[x][1-y]);
            }
            tree[x][0]=-1; tree[x][1]=-1;
        }
    }
    rep(i,n){
        cout<<' ';
        cout<<res[i];
    }
    cout<<endl;
}

int main(){
    ll n; cin>>n;
    vector<vector<ll>> tree(n);
    vector<ll> par(n, -1);
    rep(i,n){
        ll id,left,right; cin>>id>>left>>right;

        if(left!=-1){
            tree[id].push_back(left);
            par[left]=id;
        }else{
            tree[id].push_back(-1);
        }

        if(right!=-1){
            tree[id].push_back(right);
            par[right]=id;
        }else{
            tree[id].push_back(-1);
        }
    }

    ll root;
    rep(i,n){
        if(par[i]==-1) root=i;
    }

    preorder(n, tree, root);
    inorder(n, tree, root);
    postorder(n, tree, root);
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

struct node{
    int l,r;
};
node v[26];
bool nroot[26];
vector<int> preord,inord,postord;
void dfs(int vi){
    preord.pb(vi);
    if(v[vi].l!=-1)dfs(v[vi].l);
    inord.pb(vi);
    if(v[vi].r!=-1)dfs(v[vi].r);
    postord.pb(vi);

}
int main(){
    int n;
    cin>>n;
    int id,l,r,root;
    rep(i,n){
        cin>>id>>l>>r;
        v[id].l=l,v[id].r=r;
        if(l!=-1) nroot[l]=true;
        if(r!=-1) nroot[r]=true;
    }
    rep(i,n)if(!nroot[i]) root=i;
    dfs(root);
    cout<<"Preorder"<<endl;
    rep(i,n) cout<<" "<<preord[i];
    cout<<endl;
    cout<<"Inorder"<<endl;
    rep(i,n) cout<<" "<<inord[i];
    cout<<endl;
    cout<<"Postorder"<<endl;
    rep(i,n) cout<<" "<<postord[i];
    cout<<endl;
    return 0;
}

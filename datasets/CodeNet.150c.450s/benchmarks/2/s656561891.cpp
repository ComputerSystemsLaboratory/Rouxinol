//パーティション
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define vec_input(v) for(auto it=v.begin();it!=v.end();it++){cin>>*it;}
#define vec_output(v) for(auto it=v.begin();it!=v.end();it++){if(it!=v.begin())cout<<" ";cout<<*it;}cout<<endl;
#define vec_debug(v) for(auto it=v.begin();it!=v.end();it++){cerr<<*it<<" ";}cerr<<endl;
#define yn(ans) cout<<(ans?"Yes":"No")<<endl
#define YN(ans) cout<<(ans?"YES":"NO")<<endl
#define umap unordered_map
#define uset unordered_set
using namespace std;
using ll = long long;

int partition(vector<int> &A,int p,int r){
    int x=A[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    vec_input(vec);
    int index;
    index=partition(vec,0,n-1);
    rep(i,n){
        if(i)cout<<" ";
        if(i==index)cout<<"["<<vec[i]<<"]";
        else cout<<vec[i];
    }
    cout<<endl;
}

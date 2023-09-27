#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n+1); ++i)
using namespace std;
using ll = long long;
// const int INF = +100100100;
typedef pair<int,int> P;


vector<int> h;

void Maxheapify(int i, vector<int> &h){
    // base case
    // if(2*i>h.size()-2){
    //     cout << 2*i<<endl;
    //     return;
    // }
    int r,l,maxi;
    l = 2*i;r=2*i+1;
    // printf("l: %d, r: %d\n",l,r);
    // search largest property among h[i],h[l] and h[r]
    
    if(l<=h.size()-1 && h[i]<h[l])maxi=l;
    else maxi=i;
    if(r<=h.size()-1 && h[r]>h[maxi])maxi=r;
    if(maxi!=i){
        swap(h[maxi],h[i]);
        Maxheapify(maxi,h);
    }
}

#define NIL -1
int main(){
    int n;
    cin >> n;
    // rep(i,n)cin>>h[i];
    h.push_back(NIL);
    rep(i,n){
        int v;
        cin >> v;
        h.push_back(v);
    }
    // 中間ノードのみアクセスする
    for(int i = n/2; i>=1;--i)Maxheapify(i,h);
    rrep(i,n)cout<<" "<<h[i];
    cout << endl;
    return 0;
}

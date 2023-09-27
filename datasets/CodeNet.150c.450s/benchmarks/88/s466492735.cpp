#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

const int INF=1000100010;
int main(){
    int h,w;
    int aw;
    while(cin>>h>>w,h|w){
        pint c={h*h+w*w,h};
        pint mn={INF,INF};
        FOR(i,1,151)FOR(j,i+1,151){
            pint tc={i*i+j*j,i};
            if(tc>c&&mn>tc) mn=tc,aw=j;
        }
        cout<<mn.second<<" "<<aw<<endl;
    }
    return 0;
}

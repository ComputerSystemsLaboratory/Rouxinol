#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define INF 2000000000



using namespace std;
int main(void){
    int n,m;
    vector<int> v;
    cin>>n>>m;
    rep(i,0,n){
        v.push_back(i+1);
    }
    
    rep(i,0,m){
        int x,y;
        char c;
        cin>>x>>c>>y;
        x--; y--;
        int swap;
        swap=v[x];
        v[x]=v[y];
        v[y]=swap;
        
    }
    
    rep(i,0,n) cout<<v[i]<<endl;
    return 0;
}
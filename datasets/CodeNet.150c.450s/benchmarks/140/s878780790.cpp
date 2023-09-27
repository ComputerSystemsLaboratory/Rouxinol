#include<utility>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
#include<cassert>
#include<random>
using namespace std;
#define MK make_pair
#define F first
#define S second
#define ege pair<int,pair<int,int>> //w,s,t
const int MX=1e9+7;

int a[11000];

int search(int c){
    if(a[c]==c){return c;}
    a[c]=search(a[c]);
    return a[c];
}




int main(){
    int v,e;
    int W=0;
    for(int i=0;i<11000;i++){
        a[i]=i;
    }
    priority_queue<ege> E;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int s,t,w;
        cin>>s>>t>>w;
        E.push({-1*w,{s,t}});
    }
    while(!E.empty()){
        ege t=E.top();
        E.pop();
        int sp=search(t.S.F);
        int tp=search(t.S.S);
        if(sp==tp){continue;}
        a[sp]=tp;
        W-=t.F;
    }
    cout<<W<<endl;
    
    return 0;
}

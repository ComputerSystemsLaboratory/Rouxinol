#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;

int num[31];

int main(){
    rep(i,31)num[i]=i;
    int x,y;
    cin>>x>>y;
    
    int n,m;
    char b;
    rep(i,y){
        cin>>n>>b>>m;
        swap(num[n],num[m]);
    }
    for(int i=1;i<x+1;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
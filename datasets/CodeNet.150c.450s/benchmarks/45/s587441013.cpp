#include <numeric>
#include<iostream>
#include<set>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#include <cstdio>
#include<algorithm>
#include <sstream>
#include<string>
#include <cmath>
#include <iomanip>
#include <string>
#include<list>
using namespace std;
#define inf 1000000007
#define int long long
#define rep(i,j,n) for(int i=j;i<n;i++)
typedef pair<int,int>  P;
struct edge{int to,cost;};
double pi = 3.141592653589793;
//使うやつはここから下に置こうな
int fact(int x,int y){
    if(y==1)return x;
    else if(y%2==0)return (fact(x*x%inf,y/2))%inf;
    else return fact(x*x%inf,y/2)%inf*x%inf;
}
signed main(){
    int n,c;cin>>n>>c;//nをc乗します
    cout<<fact(n,c)<<endl;
    return 0;
}


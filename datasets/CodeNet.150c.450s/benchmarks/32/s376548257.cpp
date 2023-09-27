#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <functional>
#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;
const int MOD = 1000000007;


typedef long long int ll; 
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;

void floatOutPutSetup(){
    cout << fixed;
    cout << setprecision(10);
}

int solve(int m,int nmin,int nmax) {
    vector<int> p(m,0);
    vector<int> s;
    rep(i,m)cin>>p[i];
    sort(p.rbegin(),p.rend());//降順ソート
    rep(i,nmax-nmin+1) s.push_back(p[nmin+i-1]-p[nmin+i]);
    
    Pii ans;
    ans = make_pair(0,0);

    rep(i,nmax-nmin+1){
        if(s[i]>=ans.second) ans = make_pair(i,s[i]);
    }
    return nmin+ans.first;
}

int main(){
    int m,nmin,nmax;
    cin >>m>>nmin>>nmax;
    while (m!=0){
        cout<<solve(m,nmin,nmax)<<endl;
        cin>>m>>nmin>>nmax;
    }
    
}

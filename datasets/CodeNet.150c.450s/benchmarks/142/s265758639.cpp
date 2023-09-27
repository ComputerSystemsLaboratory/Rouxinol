#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<cmath>
#define REP(i,a) for (int i = 0;i < (a);++i)
#define FOR(i,a,b) for (int i = (a);i < (b); ++i)
#define FORR(i,a,b) for (int i = (a);i >= (b); --i)
#define ALL(obj) (obj).begin(),(obj).end()
#define SORT(list) sort(ALL((list)));
#define MOD 1000000007
using namespace std;
using ll = long long;
int main(){
    int n,k;
    cin >> n >> k;
    vector<ll>a(n);
    REP(i,n)cin >> a[i];
    
    
    REP(i,n-k){
        if(a[i] < a[i+k])cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
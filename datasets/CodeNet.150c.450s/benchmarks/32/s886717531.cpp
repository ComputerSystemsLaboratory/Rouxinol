#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <fstream>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
typedef long long ll;

#define INF 1000000000

int main(){
    int m,mi,mx;
    while(cin>>m>>mi>>mx, m){
        vector<int> p(m);
        rep(i,m) cin>>p[i];

        sort(all(p), greater<int>());

        int n, gap=0;

        for(int i=mi-1; i<mx; i++){
            if(p[i]-p[i+1] >= gap){
                n=i+1;
                gap = p[i]-p[i+1];
            }
        }
        cout<<n<<endl;
    }

  return 0;
}
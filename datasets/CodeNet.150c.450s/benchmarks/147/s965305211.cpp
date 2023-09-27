#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <cmath>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
const double pi=acos(-1);

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
int main(){
    int n;
    cin >> n;
    vector<int> ans(n+1);
    for(int x=1;x<=100;x++){
        for(int y=1;y<=100;y++){
            for(int z=1;z<=100;z++){
                int s=x*x+y*y+z*z+x*y+y*z+z*x;
                if(s>n) continue;
                ans[s]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}
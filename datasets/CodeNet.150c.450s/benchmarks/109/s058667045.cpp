#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include<numeric>
#include<cmath>
#include<stdio.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll,ll> pll;
const ll inf = 1LL << 60;
const int day = 24*3600;

int main(){
    //cin.tie(nullptr);
	//ios_base::sync_with_stdio(false);
	//cout << fixed << setprecision(15);
    vector<int> ans;
    while(true){
        int n; cin>>n;
        if(n == 0)break;
        else{
            vector<int> imos(day,0);
            vector<int> ruiseki(day,0);
            REP(i,n){
                int a,b,c,d,e,f;
                scanf("%d:%d:%d %d:%d:%d", &a,&b,&c,&d,&e,&f);
                (void)getchar();
                //cout << a << b <<c<<d<<e<<f<<endl;
                int start = 3600*a + 60*b + c;
                int end = 3600*d + 60*e + f;
                imos[start] += 1;
                imos[end] -= 1;
            }
            ruiseki[0] = imos[0];
            int maxi = 0;
            REP(i,day-1){
                ruiseki[i+1] = ruiseki[i] + imos[i+1];
                maxi = max(maxi,ruiseki[i+1]);
            }

            ans.push_back(maxi);

        }
    }

    REP(i,ans.size()){
        cout<<ans[i] <<endl;
    }
}

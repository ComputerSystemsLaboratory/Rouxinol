#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<stack>
#include<queue>
#include<string>
#include<set>
#include<map>
using namespace std;
#define rep(i,n) for(int i=0;(i)<(n);(i)++)
#define FOR(i,m,n) for(int i=(m);(i)<(n);(i)++)
typedef long long ll;

int main(){
    int m,nmin,nmax;
    while(cin >> m >> nmin >> nmax,m|nmin|nmax){
        vector<int> P(m);
        rep(i,m)cin >> P[i];
        sort(P.begin(),P.end());
        reverse(P.begin(),P.end());
        int res=0,gap_max=0;
        for(int i=nmin;i<=nmax;i++){
            int gap = P[i-1]-P[i];
            if(gap>=gap_max){
                res=i;
                gap_max=gap;
            }
        }
        cout << res << endl;
    }
    return 0;
}

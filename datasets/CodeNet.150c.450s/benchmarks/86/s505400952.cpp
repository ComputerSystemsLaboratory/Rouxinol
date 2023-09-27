#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

#define REP(i,n) for(int i=0;i<(n);i++)

int di[4] = {1, 0, -1, 0};
int dj[4] = {0, 1, 0, -1};
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;

int main(){
    int n, m, p;
    while(cin >> n >> m >> p){
        if(n+m+p==0) break;
        int athlete[101];
        int all = 0;
        for(int i=1;i<n+1;i++){
            cin >> athlete[i];
            all += athlete[i];
        }
        int divident = all * (100 - p);
        if(athlete[m]==0) cout << 0 << endl;
        else{
            int ans = divident / athlete[m];
            cout << ans << endl;
        }
    }
    return 0;
}
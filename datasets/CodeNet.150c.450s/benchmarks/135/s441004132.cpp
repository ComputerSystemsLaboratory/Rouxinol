#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cstring>
#include<string>

#define REP(i,n) for(int i=0;i<(n);i++)

int di[4] = {1, 0, -1, 0};
int dj[4] = {0, 1, 0, -1};
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;

int main(){
    int n,m;
    while(cin >> n >> m){
        if(n+m==0) break;
        int h[n], w[m], max_h=0, max_w=0;
        REP(i,n){
            cin >> h[i];
            max_h += h[i];
        }
        REP(i,m){
            cin >> w[i];
            max_w += w[i];
        }

        int wh[max_h+1];
        int ww[max_w+1];
        memset(wh,0,sizeof(wh));
        memset(ww,0,sizeof(ww));
        REP(i,n){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum += h[j];
                wh[sum]++;
            }
        }
        REP(i,m){
            int sum = 0;
            for(int j=i; j<m; j++){
                sum += w[j];
                ww[sum]++;
            }
        }

        int cnt = 0;
        REP(i,min(max_h+1,max_w+1)) {
            cnt += wh[i] * ww[i];
        }
        cout << cnt << endl;
    }
    return 0;
}
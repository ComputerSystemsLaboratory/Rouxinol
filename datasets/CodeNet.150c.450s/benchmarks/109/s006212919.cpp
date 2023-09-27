#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstdio>
#include<cstring>

#define REP(i,n) for(int i=0;i<(n);i++)

int di[4] = {1, 0, -1, 0};
int dj[4] = {0, 1, 0, -1};
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;

int table[86400];

int convert2sec(int hh, int mm, int ss){
    return 3600*hh + 60*mm + ss;
}

int main(){
    int n;
    while(cin >> n && n != 0){
        memset(table,0,sizeof(table));
        REP(i,n){
            int hd, md, sd, ha, ma, sa;
            scanf("%d:%d:%d %d:%d:%d", &hd, &md, &sd, &ha, &ma, &sa);
            int dep_sec = convert2sec(hd,md,sd);
            int arr_sec = convert2sec(ha,ma,sa);
            table[dep_sec]++;
            table[arr_sec]--;
        }
        REP(i,86400) if(i>0) table[i] += table[i-1];

        int m = 0;
        REP(i,86400) if(table[i] > m) m = table[i];
        cout << m << endl;
    }
    return 0;
}
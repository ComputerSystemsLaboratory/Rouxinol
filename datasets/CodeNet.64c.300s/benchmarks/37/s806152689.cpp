#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;


int solve(int num,int now){
    int dis = num - now;

    if(dis == 0) return 1;
    else if(dis > 0) return solve(dis,now + 1);
    else if(dis < 0) return 0;

    return 0;
}
int main(){
    int n;
    while(cin >> n,n) {
        int cnt = 0;
        REP(i,1,n){
            cnt += solve(n,i);
        }
        cout << cnt << endl;
    }


    return 0;
}


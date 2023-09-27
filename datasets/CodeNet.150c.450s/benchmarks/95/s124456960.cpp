#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    map<string, int> ac;
    ac["lu"] = ac["ru"] = 1;
    ac["ld"] = ac["rd"] = -1;
    int N;
    while(cin >> N && N){
        int sum = 0, cnt = 0;
        bool climbed = false;
        rep(i, N){
            string a; cin >> a;
            sum += ac[a];
            if(sum == 2 && !climbed){
                climbed = true;
                cnt++;
            }
            if(sum == 0 && climbed){
                climbed = false;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
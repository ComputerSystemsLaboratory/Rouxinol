#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
const int inf=1e9+7;
const ll mod=1e9+7;
const ll big=1e18;

int DP[100000];

int main() {
    int N;
    vector<int> ansarr;
    string s, t;
    int sh, sm, ss, th, tm, ts;
    int ans;
    while(true){
        for(int i=0;i<100000;++i){
            DP[i] = 0;
        }
        cin>>N;
        if(N==0) break;
        for(int i=0;i<N;++i){
            cin>>s>>t;
            sh = stoi(s.substr(0, 2));
            sm = stoi(s.substr(3, 2));
            ss = stoi(s.substr(6, 2));
            th = stoi(t.substr(0, 2));
            tm = stoi(t.substr(3, 2));
            ts = stoi(t.substr(6, 2));
            DP[sh*60*60+sm*60+ss]++;
            DP[th*60*60+tm*60+ts]--;
        }
        for(int i=1;i<100000;++i){
            DP[i] += DP[i-1];
        }
        ans = 0;
        for(int i=0;i<100000;++i){
            if(ans<DP[i]) ans = DP[i];
        }
        ansarr.push_back(ans);
    }
    for(int i=0;i<ansarr.size();++i){
        cout<<ansarr[i]<<endl;
    }
}



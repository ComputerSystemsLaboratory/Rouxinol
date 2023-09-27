#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0;}



int main() {
    while(true) {
        int n;
        cin >> n;
        if(n==0) break;
        vector<int>s(90000,0);
        
        rep(i,n) {
            string start,arrived;
            cin >> start >> arrived;
            int hour = (start[0]-'0')*10+(start[1]-'0');
            hour *= 3600;
            int minute = (start[3]-'0')*10+(start[4]-'0');
            minute *= 60;
            int second = (start[6]-'0')*10+(start[7]-'0');
            s[hour+minute+second]++;
            
            hour = (arrived[0]-'0')*10+(arrived[1]-'0');
            hour *= 3600;
            minute = (arrived[3]-'0')*10+(arrived[4]-'0');
            minute *= 60;
            second = (arrived[6]-'0')*10+(arrived[7]-'0');
            s[hour+minute+second]--;
            
        }
        rep(i,87000) {
            s[i+1] += s[i];
        }
        
        int ans = 0;
        rep(i,87000) {
            ans = max(ans,s[i]);
        }
        cout << ans << endl;
    }
}



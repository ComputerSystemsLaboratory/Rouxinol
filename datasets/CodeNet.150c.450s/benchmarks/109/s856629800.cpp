#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

const int mod = 1e5;
const long long INF = 1LL<<60;
//using ll = long long;
//using P = pair<int,int>;
 
int main(){
    int n;
    
    while(cin >> n){
        if (n == 0) break;
        
        vector<long long> imos(101010);
        
        rep(i,n){
            string s1, s2;
            cin >> s1 >> s2;
            
            int start_h1 = ((s1[0] - '0') * 10 + (s1[1] - '0')) * 3600; 
            int start_m1 =  ((s1[3] - '0') * 10 + (s1[4] - '0')) * 60;
            int start_s1 = (s1[6] - '0') * 10 + s1[7] - '0';
            int start_time =  start_h1 + start_m1 + start_s1;
            
            int arrival_h2 = ((s2[0] - '0') * 10 + (s2[1] - '0')) * 3600; 
            int arrival_m2 =  ((s2[3] - '0') * 10 + (s2[4] - '0')) * 60;
            int arrival_s2 = (s2[6] - '0') * 10 + s2[7] - '0';
            int arrival_time =  arrival_h2 + arrival_m2 + arrival_s2;
            
            for (int j = start_time; j < arrival_time; j++) imos[j]++;
        }

        long long ans = 0;
        
        for (int i = 0; i <86400; i++) ans = max(ans, imos[i]);
        cout << ans << endl;
        
    }
}

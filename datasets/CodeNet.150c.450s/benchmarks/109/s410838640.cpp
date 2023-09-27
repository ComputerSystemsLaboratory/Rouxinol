#include<bits/stdc++.h>
using namespace std;


int main(){
    while(1){
        int n; cin >> n;
        if(n == 0) break;
        vector<int> S(n), T(n);
        vector<int> table(3600*24, 0);
        for(int i=0; i<n; i++){
            for(int j=0; j<2; j++){
                string time; cin >> time;
                int hh, mm, ss;
                hh=10*(time[0]-'0')+(time[1]-'0');
                mm=10*(time[3]-'0')+(time[4]-'0');
                ss=10*(time[6]-'0')+(time[7]-'0');
                if(j == 0) S[i]=3600*hh+60*mm+ss;
                else T[i]=3600*hh+60*mm+ss;
            }
            table[S[i]]++;
            table[T[i]]--;
        }
        for(int i=1; i<3600*24; i++){
            table[i]+=table[i-1];
        }
        int res=0;
        for(int i=0; i<3600*24; i++){
            res=max(res, table[i]);
        }
        cout << res << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int toi(string s){
    int t = ((s[0] - '0')*10 + s[1] - '0') * 3600 + ((s[3] - '0') * 10 + s[4] - '0') * 60 + (s[6] - '0')*10 + s[7] - '0';
    return t;
}
int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> sum(24*60*60 + 1, 0);
        for(int i =0; i < n; i++){
            string go, arrive;
            cin >> go >> arrive;
            int gos = toi(go);
            int as = toi(arrive);
            sum[gos]++;
            sum[as]--;
        }
        for(int i = 1; i < 24*60*60 + 1; i++) sum[i] += sum[i - 1];
        int ans = 0;
        for(int i = 0; i < 24*60*60 + 1; i++) ans = max(ans, sum[i]);
        cout << ans << endl;
    }
}

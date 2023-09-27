#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000

bool comp(vector<int>& a, vector<int>& b){
    return a[1] > b[1];
}

int main(){
    while(1){
        int n, m; cin >> n >> m;
        if(n == 0) break;
        vector<vector<int> > a(n, vector<int> (2));
        for(int i = 0; i < n; i++) cin >> a[i][0] >> a[i][1];
        sort(a.begin(), a.end(), comp);

        for(int i = 0; i < a.size(); i++){
            if(a[i][0] <= m){
                m -= a[i][0];
                a[i][0] = 0;
            }else{
                a[i][0] -= m;
                break;
            }
        }

        int ans = 0;
        for(int i = 0; i < a.size(); i++){
            //cout << a[i][0] << " " << a[i][1] << endl;
            ans += a[i][0] * a[i][1];
        }

        cout << ans << endl;
        
    }

    return 0;

}
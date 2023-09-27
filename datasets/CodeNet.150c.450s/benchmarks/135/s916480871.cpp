#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n,m; cin >> n >> m;
        if(n == 0)break;
        vector<long long> h(n+1,0), w(m+1, 0);
        map<long long, int> r, c;
        for(int i = 1; i <= n; i++){
            cin >> h[i];
            h[i] += h[i-1];
        }
        for(int i = 1; i <= m; i++){
            cin >> w[i];
            w[i] += w[i-1];
        }
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n+1; j++){
                long long temp = h[j]-h[i];
                if(c.find(temp) != c.end()){
                    c[temp]++;
                }
                else{
                    c[temp] = 1;
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = i+1; j < m+1; j++){
                long long temp = w[j]-w[i];
                if(r.find(temp) != r.end()){
                    r[temp]++;
                }
                else{
                    r[temp] = 1;
                }
            }
        }
        int ans = 0;/*
        for(map<long long, int>::iterator itr = r.begin(); itr != r.end(); ++itr){
            cout << itr->first << " " << itr->second << endl;
        }*/
        //cout << "\n";
        /*for(map<long long, int>::iterator itr = c.begin(); itr != c.end(); ++itr){
            cout << itr->first << " " << itr->second << endl;
        }*/
        
        for(map<long long, int>::iterator itr = r.begin(); itr != r.end(); ++itr){
            if(c.find(itr->first) != c.end()){
                ans += itr->second * c[itr->first];
            }
        }
        cout  << ans << endl;
        //cout << "\n";
    }    
    return 0;
}

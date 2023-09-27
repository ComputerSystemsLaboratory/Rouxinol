#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    long long total = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        total += a[i];
    }
    
    map<int, int>mp;
    for(int i = 0; i < n; i++){
        mp[a[i]] += 1;
    }
    
    int q;
    cin >> q;
    while(q--){
        int b, c;
        cin >> b >> c;
        long long current_value = mp[b];
        long long diff = c - b;
        total += (diff)*current_value;
        
        mp[b] = 0;
        mp[c] += current_value;
        
        cout << total << endl;
    }
}

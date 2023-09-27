#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

ll f(string s){
    string s1,s2,s3;
    s1 = s.substr(0,2);
    s2 = s.substr(3,2);
    s3 = s.substr(6,2);

    int hh = stoi(s1)*3600;
    int mm = stoi(s2)*60;
    int ss = stoi(s3)*1;

    return hh+mm+ss;
}

const int mx=23*3600+59*60+59;

void solve(int n){
    vector<int> v(mx+10,0);
    for(ll i=0;i<n;i++){
        string s1,s2;
        cin >> s1 >> s2;
        ll s=f(s1);
        ll t=f(s2);
        v[s]++;
        v[t]--;
    }
    for(int i=1;i<mx+10;i++){
        v[i] = v[i] + v[i-1];
    }
    int ans = 0;
    for(int i=0;i<mx+10;i++){
        ans = max(ans,v[i]);
    }
    cout << ans << endl;
}

int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        solve(n);
    }
}
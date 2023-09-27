#include <bits/stdc++.h>
using namespace std;

#define ll long long

int sum(string s){
    int n = s.size();
    int ans = 0l;
    for(int i=0;i<n;i++) ans += (int)(s[i]-'0');
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string s;
    string c[4];
    c[0] = "AC";
    c[1] = "WA";
    c[2] = "TLE";
    c[3] = "RE";
    int ans[4] = {0};
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<4;j++){
            if(s==c[j]) ans[j]++;
        }
    }
    for(int i=0;i<4;i++) cout << c[i] << " x " << ans[i] << '\n';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n;
string ans;
vector<string> s(2);
vector<char> a={'m','c','x','i'};
vector<int> cnt(4);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for (;n--;){
        cin >> s[0] >> s[1];
        fill(cnt.begin(),cnt.end(),0);
        for (int i=0;i<2;++i){
            for (int j=0;j<s[i].size();++j){
                for (int k=0;k<4;++k){
                    if (s[i][j]==a[k]){
                        if (!j||s[i][j-1]-'0'>=10) cnt[k]+=1;
                        else cnt[k]+=s[i][j-1]-'0';
                    }
                }
            }
        }
        for (int i=3;i>=0;--i) if (cnt[i]>=10){
            ++cnt[i-1],cnt[i]-=10;
        }
        ans="";
        for (int i=0;i<4;++i){
            if (!cnt[i]) continue;
            if (cnt[i]>1) ans+=(char)(cnt[i]+'0');
            ans+=a[i];
        }
        cout << ans << endl;
    }
}

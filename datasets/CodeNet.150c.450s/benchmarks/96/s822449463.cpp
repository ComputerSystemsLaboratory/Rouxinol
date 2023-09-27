#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<char> button1={'.',',','!','?',' '};
    int n; cin >> n;
    for (int i=0;i<n;++i){
        string s,ans=""; cin >> s;
        int cnt=-1;
        for (int j=0;j<s.size();++j){
            if (s[j]!='0'){++cnt; continue;}
            if (j==0||s[j-1]=='0') continue;
            int x=s[j-1]-'0';
            if (x==1) ans+=button1[cnt%5];
            else if (x==7) ans+='p'+cnt%4;
            else if (x==8) ans+='t'+cnt%3;
            else if (x==9) ans+='w'+cnt%4;
            else ans+='a'+((x-2)*3+cnt%3);
            cnt=-1;
        }
        cout << ans << endl;
    }
}

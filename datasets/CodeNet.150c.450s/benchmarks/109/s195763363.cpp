#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n;
    while(cin>>n,n){
        vector<int> imos(100000,0);
        for(int i=0;i<n;i++){
            string s,t;cin>>s>>t;
            int tmp=0;
            tmp+=(s[0]-'0')*36000;tmp+=(s[1]-'0')*3600;
            tmp+=(s[3]-'0')*600;tmp+=(s[4]-'0')*60;
            tmp+=(s[6]-'0')*10;tmp+=(s[7]-'0');
            imos[tmp]++;
            tmp=0;
            tmp+=(t[0]-'0')*36000;tmp+=(t[1]-'0')*3600;
            tmp+=(t[3]-'0')*600;tmp+=(t[4]-'0')*60;
            tmp+=(t[6]-'0')*10;tmp+=(t[7]-'0');
            imos[tmp]--;
        }
        for(int i=1;i<=99999;i++) imos[i]+=imos[i-1];
        int res=0;
        for(int i=0;i<100000;i++) res=max(res,imos[i]);
        cout<<res<<endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n,m;
        cin >> n >> m;
        if(n==0 && m==0)break;
        vector<int> h(n+1,0);
        vector<int> w(m+1,0);
        for(int i=1;i<=n;i++){
            cin >> h[i];
            h[i]+=h[i-1];
//            cout << h[i] << " ";
        }
//        cout << endl;
        for(int i=1;i<=m;i++){
            cin >> w[i];
            w[i]+=w[i-1];
//            cout << w[i] << " ";
        }
//        cout << endl;
        int ans=0;
        map<int,int> hlen,wlen;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                int t=h[j]-h[i];
                hlen[t]++;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=i+1;j<=m;j++){
                int t=w[j]-w[i];
                wlen[t]++;
            }
        }
        map<int,int>::iterator hitr,witr;
        for(hitr=hlen.begin();hitr!=hlen.end();++hitr){
            int len=hitr->first,hval=hitr->second;
            witr=wlen.find(len);
            if(witr!=wlen.end()){
                int wval=witr->second;
                ans+=hval*wval;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
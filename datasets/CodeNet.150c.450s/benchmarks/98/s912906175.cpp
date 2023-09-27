#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m,n|m){
        int sf=0,ss=0;
        vector<int> vf(n),vs(m);
        for(auto &x:vf){
            cin>>x;
            sf+=x;
        }

        for(auto &x:vs){
            cin>>x;
            ss+=x;
        }

        if(abs(sf-ss)&1){
            cout<<-1<<endl;
            continue;
        }

        sort(vf.begin(),vf.end());
        sort(vs.begin(),vs.end());

        bool f=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(sf+vs[j]-vf[i] == ss+vf[i]-vs[j]){
                    cout << vf[i] << " " << vs[j] << endl;
                    f=true;i=n;j=m;
                }
            }
        }

        if(!f) cout << -1 << endl;
    }
}
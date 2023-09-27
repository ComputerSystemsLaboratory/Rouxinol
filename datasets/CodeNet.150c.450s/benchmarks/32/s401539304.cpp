#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int m,nmin,nmax;
    while(cin>>m>>nmin>>nmax,m||nmin||nmax){
        vector<int> p(m);
        nmin--;nmax--;
        for(int i=0;i<m;i++) cin>>p[i];
        sort(p.rbegin(),p.rend());
        int res=0,gap=0;
        for(int i=nmin;i<=nmax;i++){
            int gtmp=p[i]-p[i+1];
            if(gtmp>=gap){
                gap=gtmp;
                res=i+1;
            }
        }
        cout<<res<<endl;
    }
}
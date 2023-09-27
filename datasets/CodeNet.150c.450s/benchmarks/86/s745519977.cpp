#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n,m,p;
    while(cin>>n>>m>>p,n||m||p){
        int su=0;
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
            su+=x[i];
        }
        m--;
        if(x[m]==0) cout<<0<<endl;
        else cout<<(su*(100-p))/x[m]<<endl;
    }
}
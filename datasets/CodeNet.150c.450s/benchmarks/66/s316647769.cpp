#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n;cin>>n;
    vector<string> u(n);
    for(int i=0;i<n;i++) cin>>u[i];
    int m;cin>>m;
    int locked=1;
    for(int i=0;i<m;i++){
        string t;cin>>t;
        for(int j=0;j<n;j++){
            if(u[j]==t){
                if(locked) cout<<"Opened by "<<t<<endl;
                else cout<<"Closed by "<<t<<endl;
                locked=1-locked;
                goto done;
            }
        }
        cout<<"Unknown "<<t<<endl;
        done: continue;
    }
}
#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n;
    while(cin>>n,n){
        int res=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if((i+j)*(j-i+1)/2==n) res++;
            }
        }
        cout<<res<<endl;
    }
}
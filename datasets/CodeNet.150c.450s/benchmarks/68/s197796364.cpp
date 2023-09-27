#include "bits/stdc++.h"

using namespace std;

const int INF = numeric_limits<int>::max() / 2;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n;
    while(cin>>n,n){
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int res=INF;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<res){
                res=a[i]-a[i-1];
            }
        }
        cout<<res<<endl;
    }
}
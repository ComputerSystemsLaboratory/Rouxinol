#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n,p;
    while(cin>>n>>p,n&&p){
        int idx=0;
        vector<int> stones(n,0);
        int cup=p;
        while(true){
            if(cup){
                stones[idx]++;
                cup--;
            }
            else{
                cup+=stones[idx];
                stones[idx]=0;
            }
            if(stones[idx]==p) break;
            idx++;
            idx%=n;
        }
        cout<<idx<<endl;
    }
}
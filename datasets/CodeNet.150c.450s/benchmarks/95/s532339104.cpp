#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n;
    while(cin>>n,n){
        int res=0,l=0,r=0,last=0;//floor->0 step->1
        for(int i=0;i<n;i++){
            string s;cin>>s;
            if(s=="lu") l=1;
            else if(s=="ru") r=1;
            else if(s=="ld") l=0;
            else r=0;
            if(l!=r) continue;
            if(last!=l){
                res++;
                last=l;
            }
        }
        cout<<res<<endl;
    }
}
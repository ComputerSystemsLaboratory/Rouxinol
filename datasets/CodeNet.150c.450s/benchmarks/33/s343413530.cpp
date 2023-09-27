#include "bits/stdc++.h"

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int x,y,s;
    while(cin>>x>>y>>s,x||y||s){
        int res=0;
        for(int p=1;p<=s/2;p++){
            int q=s-p;
            for(int i=1;i<=p;i++){
                for(int j=1;j<=q;j++){
                    if(i*(100+x)/100 != p || j*(100+x)/100 != q)continue;
                    res =max(res,i*(100+y)/100+j*(100+y)/100);
                }
            }
        }
        cout<<res<<endl;
    }
}
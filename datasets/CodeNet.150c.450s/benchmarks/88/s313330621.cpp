#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int h,w;
    while(cin>>h>>w){
        if(h==0) break;
        int s=h*h+w*w;
        int m=1e9,x=0,y=0;
        for(int i=1;i<=150;i++){
            for(int j=i+1;j<=150;j++){
                if(i==h && j==w) continue;
                int k=i*i+j*j;
                if(k>s && m>k){
                    m=k;
                    x=j,y=i;         
                }
                if(k>s && m==k){
                    if(y>i){
                        y=i,x=j;
                    }
                }
                if(k==s){
                    if(x*x+y*y==s && i>h && y>i){
                        y=i,x=j;
                    }
                    if(x*x+y*y!=s && i>h){
                        m=s;
                        y=i,x=j;
                    }
                }
            }
        }
        cout<<y<<" "<<x<<"\n";
    }
    
}

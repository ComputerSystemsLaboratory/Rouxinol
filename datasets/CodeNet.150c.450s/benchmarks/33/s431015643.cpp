#include <bits/stdc++.h>
using namespace std;
int mot(int a,int x){
    int i=1;
    while(1){
        if((double)i*(100+x)/100>=a){
            if((double)i*(100+x)/100<a+1)return i;
            else return 0;
        }
        i++;
    }
}

void solve(int x,int y,int s){
    int X=x+100,Y=y+100;
    int ans=0;
    for(int i=1;i<=s/2;i++){
        int ax=i,bx=s-i;
        //cout<<ax<<"!"<<bx<<endl;
        ax=mot(ax,x);
        bx=mot(bx,x);
        //cout<<ax<<"?"<<bx<<endl;
        ax=ax*Y/100;
        bx=bx*Y/100;
        ans=max(ax+bx,ans);
        //cout<<ax<<" "<<bx<< " "<<ax+bx<<endl;
    }
    cout<<ans<<endl;
}


int main(void){
    int a,b,c;
    while(cin>>a>>b>>c,a){
        solve(a,b,c);
    }
    
}
#include<bits/stdc++.h>
 
using namespace std;
 
#define rep(i, n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define pb push_back
 
int main(){
    int x,y,z;
    while(1){
        cin>>x>>y>>z;
 
        if(x==0&&y==0&&z==0)break;
 
 
        int a[114514];
        int b[114514];
 
        rep(i,x){
            cin>>a[i];
        }

        rep(i,z-y+1){
            b[i]=a[i+y-1]-a[i+y];
        }

        rep(i,z-y+1){
            // cout<<i<<" "<<b[i]<<endl;
        }

        int count=0;
        int tmp=0;
        int ans=0;

        for(int i=0;i<z-y+1;i++){
            if(tmp<=b[i]){
                tmp=b[i];
                ans=i+y;
            }
        }
        cout<<ans<<endl;
 
       
    //     repi(i,y-1,z){
    //         // cout<<a[i]<<endl;
    //         // cout<<a[i+1]<<endl;
             
    //         if(tmp<=a[i]-a[i+1]){
    //             tmp=max(tmp,a[i]-a[i+1]);
    //             ans=i-1+y;
    //         }
 
    //         // cout<<"tmp:"<<tmp<<endl;
    //         // cout<<"ans:"<<ans<<endl;
 
    //         count++;
    //     }
    //     // cout<<count<<endl;
    //     // cout<<"tmp:"<<tmp<<endl;
    //     // cout<<"ans:"<<ans<<endl;
    //     if(y==1){
    //         cout<<ans+1<<endl;
    //     }else{
    //         cout<<ans<<endl;
    //     }
 
    }
     
}
#include<iostream>
using namespace std;
int main(){
    int n,p;
    while(1){
        int ans;
        cin>>n>>p;
        if(n==0 && p==0) break;
        int a[50]={};
        while(1){
            int co=0;
            for(int i=0;i<n;i++){
                if(p==0){
                    int count=0;
                    for(int j=0;j<n;j++){
                        if(a[j]!=0)count++;
                    }
                    if(count==1){
                        ans=i-1;
                        co=1;
                        if(ans<0){
                            ans=n-1;
                        }
                    }
                    else {
                        p=a[i];
                        a[i]=0;
                    }
                }
                else {
                    p--;
                    a[i]++;
                }
                if(co==1){
                    co=2;
                    break;
                }
            }
            if(co==2){
                cout<<ans<<endl;
                break;
            }
        }
    }
    return 0;
}


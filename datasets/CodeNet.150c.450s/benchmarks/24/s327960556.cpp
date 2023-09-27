#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    int D,P;
    while(1){
        cin>>N>>M;
        if(N==0 && M==0) break;
        
        int p[11]={};
        
        for(int i=0;i<N;i++){
            cin>>D>>P;
            p[P]+=D;
        }
        
        for(int i=10;i>0;i--){
            if(M>=p[i]){
                M-=p[i];
                p[i]=0;
            }
            else{
                p[i]-=M;
                M=0;
            }
            if(M==0) break;
        }
        
        int ans=0;
        for(int i=0;i<11;i++){
            ans+=i*p[i];
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
    
    
    
    
}


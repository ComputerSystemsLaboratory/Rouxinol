#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0;
    
    
    cin>>N;
    
    while(N!=0){ 
        vector<string> S(N);
        int ans=0;

        bool rf=false,lf=false,next_up=true;

        for(auto &&x:S){
            cin>>x;
        }

        for(int i=0;i<N;i++){

            if(S[i]=="lu")lf=true;
            if(S[i]=="ld")lf=false;
            if(S[i]=="ru")rf=true;
            if(S[i]=="rd")rf=false;

            if(next_up&&rf&&lf){
                next_up=false;
                ans++;
            }
            if(next_up==false&&rf==false&&lf==false){
                next_up=true;
                ans++;
            }
        }
        cout<<ans<<endl;
        cin>>N;
    }




}


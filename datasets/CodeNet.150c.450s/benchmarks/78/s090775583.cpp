#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> sime(1e2*5);
    for(int i=0;i<sime.size();i++){
        sime[i]=i*(i+1)*(i+2)/6;
    }
    while(cin>>n,n){
        const int INF=1e7;
        vector<int> times(n+1,INF);
                vector<int> odtimes(n+1,INF);   
        times[0]=0;
        odtimes[0]=0;
        for(int k=1;;k++){
            if(n<sime[k]) break;
            for(int i=0;i<times.size();i++){
                if(i-sime[k]>=0) times[i]=min(times[i],times[i-sime[k]]+1);                
            }
            if(sime[k]%2==1){
             for(int i=0;i<odtimes.size();i++){
                if(i-sime[k]>=0) odtimes[i]=min(odtimes[i],odtimes[i-sime[k]]+1);                
            }      
            }
        }
        
        cout<<times[n]<<" "<<odtimes[n]<<endl;
        
    }
}
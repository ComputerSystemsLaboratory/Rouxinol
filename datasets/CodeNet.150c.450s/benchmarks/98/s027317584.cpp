#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m,n||m){
        vector<int>S(n),T(m);
        int sumS=0,sumT=0;
        for(int i=0;i<n;i++){
            cin>>S[i];
            sumS+=S[i];
        }
        for(int i=0;i<m;i++){
            cin>>T[i];
            sumT+=T[i];
        }
        int ans=100000000,ss,tt;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int s=sumS+T[j]-S[i];
                int t=sumT+S[i]-T[j];
                if(s==t&&T[j]+S[i]<ans){
                    ss=S[i];tt=T[j];ans=ss+tt;
                }
            }
        }
        if(ans==100000000)cout<<-1<<endl;
        else cout<<ss<<" "<<tt<<endl;
    }
}
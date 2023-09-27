#include <iostream>
using namespace std;
int main(){
    
    int m,nmax,nmin;

    while(cin>>m>>nmin>>nmax,m){
    
        int P[m];
        int M=0,ans=0;


        for(int i=0;i<m;i++){
            
            cin>>P[i];
            
        }

        for(int i=nmin-1;i<nmax;i++){
            
            if(M<=P[i]-P[i+1]){
                
                M=P[i]-P[i+1];
                ans=i+1;
            }
            
        }


        cout<<ans<<endl;
    }
    return 0;
    
}
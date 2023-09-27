#include<iostream>
using namespace std;
int main(){
    int n,x,i,j,k;
    int a=0;
    while(1){
        cin>>n>>x;
        if (n==0 && x==0) break;
        for(i=1;i<=n;i++){
            
            for(j=i+1;j<=n;j++){
                if(j<=i)continue;
                
                for(k=j+1;k<=n;k++){
                    if(k<=j ||k<=i)continue;
                    if(i+j+k==x &&i!=k && j!=k && j!=i){
                        a=a+1;
                    }
                }
                
            }
            
        }
        cout<<a<<endl;
        a=0;
    }
    
    return 0;
}

#include <iostream>
using namespace std;
int main(void){
    while(1){
        int n,x;
        cin>>n>>x;
        if(n==0&&x==0) break;
        
        int count=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                for(int k=j+1;k<=n;k++){
                    if(i+j+k==x) count++;
                }
            }
        }
        cout<<count<<endl;
    }
   
}


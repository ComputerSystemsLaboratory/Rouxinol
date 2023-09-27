#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,x,max,c;
    max=0;
    c=0;
    while(true){
        max=0;
        cin>>n>>x;
        if(n==0 && x==0){
            break;
        }
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
                    if(x==i+j+k){
                        max=max+1;
                    }
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
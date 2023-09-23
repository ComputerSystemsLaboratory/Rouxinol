#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x,n,i,ii,iii,answer=0,j,jj,jjj;
        while(1){
            cin>>n>>x;
            answer=0;
        if(x==0 && n==0){
            break;
        }
        for(i=1;i<=n;i++){
            for(ii=1;ii<=n;ii++){
                for(iii=1;iii<=n;iii++){
                    if(i==ii || i==iii || ii==iii){}
                    else if(i<ii && ii<iii && i+ii+iii==x){answer++;}
            }
            }}
            
        cout<<answer<<endl;
    }
    return 0;
}
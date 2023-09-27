#include <iostream>
using namespace std;
const int M=1000000;

int main(){
    int n[M],x[M];
    int m=0;
    while(1){
        cin>>n[m]>>x[m];
        if(n[m]==0&&x[m]==0) break;
        m++;
    }

    for(int v=0;v<m;v++){
    int count=0;
    for(int i=1;i<=x[v]/3;i++){
        if(x[v]-i<2*n[v]&&x[v]-i>2*i+2){
            for(int k=i+1;k<=(x[v]-i)/2;k++){
                if(x[v]-i-k<=n[v]&&x[v]-i-k>k) count++;
            }
        }
    }
    cout<<count<<endl;
}
    
}
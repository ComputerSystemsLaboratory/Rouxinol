
#include <iostream>
#include<cmath>
using namespace std;
void arraycout(int *arrayy,int n){
    for(int u=0;u<n;u++){//出力
        if(u==n-1){
            cout<<arrayy[u]<<endl;
        }else{
            cout<<arrayy[u]<<' ';
        }
    }
    
}
int Bubble(int* suu,int n){
    int ans=0;
    int flag=1;
    while(flag){
        flag=0;
        for(int j=n-1;j>=0;j--){
            if(suu[j]<suu[j-1]){
                swap(suu[j],suu[j-1]);
                flag=1;
                ans++;
            }
        }
    }
    return ans;
    
}





int main(){
    int n;
    cin>>n;
    int suu[n];
    for(int i=0;i<n;i++){
        cin>>suu[i];
    }
    
    int ans=Bubble(suu,n);
    arraycout(suu,n);
    cout<<ans<<endl;
    return 0;
}

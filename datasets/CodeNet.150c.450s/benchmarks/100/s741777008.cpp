
#include <iostream>
using namespace std;
int main(){
    long long ans[20];
    int i,n;
    cin>>n;
    for(i=0;i<=n;i++){
        if(i==0){
            ans[0]=1;
        }else{
            ans[i]=ans[i-1]*i;
        }
    }
    cout<<ans[n]<<endl;
    return 0;
}
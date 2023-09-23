#include <iostream>
using namespace std;
int main(void){
    int n,ans=100000;
    cin>>n;
    for(int i=0;i<n;i++){
        ans+=ans*0.05;
        if(ans%1000==0){
            ans/=1000;
            ans*=1000;
        }
        else{
            ans/=1000;
            ans+=1;
            ans*=1000;
        }
    }
    cout<<ans<<endl;
    return 0;
}
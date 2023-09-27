#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;


int main(){
    long long int n,ans=0;
    cin>>n;
    while(n!=0){
        n=1000-n;
        if(n/100>=5){
            ans+=n/100-4;
        }
        else{
            ans+=n/100;
        }
        if(n%10>=5){
            ans+=n%10-4;
        }
        else{
            ans+=n%10;
        }
        if((n/10)%10>=5){
            ans+=(n/10)%10-4;
        }
        else{
            ans+=(n/10)%10;
        }
        cout<<ans<<endl;
        ans=0;
        cin>>n;
    }
    return 0;
}


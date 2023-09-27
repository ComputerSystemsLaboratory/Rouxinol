#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

bool isprime(int x){
    if(x==2){
        return true;
    } 
    else if(x%2==0){
        return false;
    }
    int i=3;
    while(i<=sqrt(x)){
        if(x%i==0){
            return false;
            break;
        }
        i=i+2;
    }
    return true;
}
int main(){
    int n,ans=0; cin>>n;
    vector<int>c(n,0);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        if(isprime(c[i])){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

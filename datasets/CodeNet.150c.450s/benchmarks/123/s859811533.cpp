#include<bits/stdc++.h>
using namespace std;

int isprime(int x);

int main(){
    int n;  cin>>n;
    int num[n];     for(int i=0;i<n;i++)cin>>num[i];

    int ans=0;

    for(int i=0;i<n;i++){
        ans += isprime(num[i]);    
    }
    

    cout<<ans<<endl;

    return 0;
}

//{{{
int isprime(int x){
    if(x==2)return 1;
    else if(x<2 || x%2==0)return 0;
    else if(x>=3){
        int i=3;
        while(i<=sqrt(x)){
            if(x%i==0)return 0;
            i+=2;
        }
    }

    return 1;
}
//}}}


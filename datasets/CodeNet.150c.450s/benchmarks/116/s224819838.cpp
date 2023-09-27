#include<bits/stdc++.h>
using namespace std;

long long int sum,k,n,num[200000],to;

int main(){

    while(1){

    long long int ans=-1000000000;
    cin >> n >> k;
    if(n==0&&k==0)break;

    for(int i=0;i<n;i++){
        cin  >> num[i];
    }

    for(int i=0;i<k;i++){
        sum+=num[i];
    }

    for(int i=k;i<n;i++){
        if(ans<sum)ans=sum;
        sum-=num[to++];
        sum+=num[i];
    }

    cout << ans << endl;

    sum=0;
    ans=0;
    to=0;

    }


return 0;
}
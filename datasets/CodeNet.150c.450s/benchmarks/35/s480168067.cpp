#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    for(;;){
        long long int n,a[5001]={},ma=0,sum=0;
        cin>>n;
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ma=-1e9;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum+=a[j];
                ma=max(ma,sum);
            }
        }
        cout<<ma<<endl;
    }
return 0;
}
#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    for(;;){
        int n;
        int a[10000]={0};
        cin>>n;
        if(n==0)break;
        long long int sum=0;
        long long int ans=-1000000;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum+=a[j];
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;

    }


	return 0;
}
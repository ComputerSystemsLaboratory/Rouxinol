#include<iostream>
#define INF -10000000000000000;
using namespace std;

long long int num[100100];


int main(){
    long long int n,m;
    long long int sum=0;
    long long int ans=INF;
    while(1){
        cin>>n>>m;
        if(n==0&&m==0)break;
        for(int i=0;i<100100;i++){
            num[i]=0;
            if(num[i+1]==0)break;
        }
        for(int i=0;i<n;i++){
            cin>>num[i];
            if(i<m)sum+=num[i];
        }
      //  cout<<sum<<endl;
        for(int i=1;i<n-m;i++){
            sum=sum-num[i-1]+num[i+m-1];
          //  cout<<sum<<endl;
            if(ans<sum)ans=sum;
        }
        cout<<ans<<endl;
        ans=INF;
        sum=0;
        }
    return 0;
}
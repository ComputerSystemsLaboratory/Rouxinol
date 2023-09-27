#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS=1e-10;
const ll INF=1000000000;
int main(){
    int a,d,n;
    int prime[1000010];
    for(int i=0;i<1000001;i++){
        prime[i]=1;
    }
    prime[0]=0;prime[1]=0;
    for(int i=2;i<=500000;i++){
        if(prime[i]==1){
            for(int j=i+i;j<=1000000;j+=i){
                prime[j]=0;
            }
        }
    }
    while(cin>>a>>d>>n,a+d+n){
        int c=0;
        for(int i=a;i<=1000000;i+=d){
            if(prime[i]){
                c++;
                if(c==n){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

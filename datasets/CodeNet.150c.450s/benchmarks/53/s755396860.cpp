#include<iostream>
using namespace std;
#define MAXN 1000000001

int prime[MAXN];
int main(){
    int m;cin>>m;
    int n=m;
    int p=0;
    for(int i=2;i*i<=n;i++)if(m%i==0){
        while(m%i==0){
            prime[p++]=i;
            m/=i;
        }
    }
    if(m!=1) prime[p++]=m;
    cout<<n<<":";
    for(int i=0;i<p;i++){
        cout<<' '<<prime[i];
    }
    cout<<endl;
    return 0;
}

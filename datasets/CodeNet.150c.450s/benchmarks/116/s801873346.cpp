#include<iostream>
using namespace std;
int main(){
    int a[100010],n,k;
    while(cin>>n>>k,n||k){
        for(int i=0;i<n;i++)cin>>a[i];
        int mx=-1;
        int sum=0;
        for(int i=0;i<k;i++)sum+=a[i];
        mx=sum;
        for(int i=k;i<n;i++){
            sum-=a[i-k];
            sum+=a[i];
            mx=max(mx,sum);
        }
        cout<<mx<<endl;
    }
}
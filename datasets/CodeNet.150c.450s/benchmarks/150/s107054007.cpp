#include <iostream>
using namespace std;
#define MAX 2000000
int a[MAX],b[MAX],c[10010];
int main(){
    int i,n,sum;
    
    cin>>n;
    sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>sum)sum=a[i]+1;
        c[a[i]]++;
    }
    for(i=1;i<=sum;i++){
        c[i]+=c[i-1];
    }
    for(i=0;i<n;i++){
        b[--c[a[i]]]=a[i];
    }
    for(i=0;i<n;i++)i==n-1?cout<<b[i]<<endl:cout<<b[i]<<" ";
    return 0;
}
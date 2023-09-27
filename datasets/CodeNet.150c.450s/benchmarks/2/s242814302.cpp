#include <iostream>
using namespace std;
int partition(int a[],int n){
    int i,j,v,x;
    v=n-1;
    x=a[v];
    j=0;
    for(i=0;i<n;i++){
        if(a[i]<=x)swap(a[i],a[j++]);
    }
    return j-1;
}

int main(void){
    int i,n,v,a[100000+1];
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    v=partition(a,n);
    for(i=0;i<n;i++){
        if(i==v)cout<<"["<<a[i]<<"]";
        else cout<<a[i];
        i==n-1 ? cout<<endl:cout<<" ";
    }
    return 0;
}
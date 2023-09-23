#include<iostream>
using namespace std;
int main(void){
    long long n,a[10000],min=1000000,max=-1000000,sum=0;
     
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<min){min=a[i];}
    if(a[i]>max){max=a[i];}
    sum=a[i]+sum;
    }
    cout<<min<<" "<<max<<" "<<sum<<endl;
    
}

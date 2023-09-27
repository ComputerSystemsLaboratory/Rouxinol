#include <iostream>
using namespace std;
int main(void){
    long long a[10001]={0};
    int n;
    long long min;
    long long max;
    int i;
    long long sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i])    min=a[i];
        }
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i])    max=a[i];
        }    
    for(i=0;i<n;i++)    sum=sum+a[i];        
    cout<<min;
    cout<<" ";
    cout<<max;
    cout<<" ";
    cout<<sum;
    cout<<endl;
}


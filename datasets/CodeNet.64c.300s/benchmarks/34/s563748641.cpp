#include <iostream>
using namespace std;

int main(void){
    int n;
    int a[100];
    int i,j,k;
    int tmp;
    
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    
    for(i=0;i<n-1;i++)cout<<a[i]<<" ";
    cout<<a[n-1]<<endl;
    
    for(i=1;i<n;i++){
        tmp=a[i];
        j=i-1;
        while(j>=0&&a[j]>tmp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tmp;
        
        for(k=0;k<n-1;k++)cout<<a[k]<<" ";
        cout<<a[n-1]<<endl;
    }

    return 0;
}

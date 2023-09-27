#include <iostream>
using namespace std;

int main(void){
    int i,j,n,tmp,cnt=0;
    int a[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                cnt++;
            }
        }
    }
    
    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl<<cnt<<endl;
    
    return 0;
}
    

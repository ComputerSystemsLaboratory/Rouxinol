#include <iostream>
using namespace std;

int main(void){
    int i,j,min,n,tmp,cnt=0;
    int a[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(min!=i){
            tmp=a[min];
                a[min]=a[i];
                a[i]=tmp;
                cnt++;
        }
    }
    
    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl<<cnt<<endl;
    
    return 0;
}
    

#include <iostream>
using namespace std;
int main(void){
    int n,a[100]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<a[n-1];
    for(int i=1;i<n;i++){
        int j=(n-1)-i;
        cout<<" "<<a[j];
    }
    cout<<endl;
    
}


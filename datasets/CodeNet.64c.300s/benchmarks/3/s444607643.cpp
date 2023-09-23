#include <iostream>
using namespace std;
int main(void){
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(i>1)cout<<" ";
        cout<<a[n-i];
    }
    cout<<endl;
    return 0;
}


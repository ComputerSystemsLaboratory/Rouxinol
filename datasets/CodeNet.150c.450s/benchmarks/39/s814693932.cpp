#include <iostream>
using namespace std;

int main(){
    int a[2];
    int i;
    for(i=0;i<2;i++)
        cin>>a[i];
    
    cout<<a[0]*a[1]<<" "<<2*(a[0]+a[1])<<endl;
    
    return 0;
}
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main(void) {
    int n;cin>>n;
    int i=2;
    cout<<n<<":";
    while(n!=1 && i*i<=n){
        if(n%i!=0)i++;
        else{
            cout<<" "<<i;
            n/=i;
        }
    }
    if(n!=1)cout<<" "<<n;
    cout<<endl;
     
    return 0;
}

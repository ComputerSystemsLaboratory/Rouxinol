#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<":";
    int j=n;
    for(int i=2;i*i<=j;i++){
        while(n%i==0){
            cout<<" "<<i;
            n=n/i;
        }
    }
    if(n!=1){
        cout<<" "<<n;
    }
    cout<<endl;
    return 0;
}

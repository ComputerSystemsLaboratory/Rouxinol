#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int n;
    long long int a=1;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    cout<<a<<endl;
    return 0;
}
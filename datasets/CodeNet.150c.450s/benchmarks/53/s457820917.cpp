#include <iostream>
using namespace std;
int n,m;
int main(void){
    cin>>n;
    cout<<n<<':';
    m=n;
    for(int i=2;i*i<=n;i++){
        while(m%i==0){
            m/=i;
            cout<<" "<<i;
        }
    }
    if(m!=1)cout<<" "<<m;
    cout<<endl;
}


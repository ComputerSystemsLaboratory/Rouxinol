#include <bits/stdc++.h>
using namespace std;


int main() {

    int64_t n;
    cin>>n;

    cout<<n<<':';

    for(int64_t i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                cout<<' '<<i;
                n/=i;
            }
        }
    }

    if(n!=1)
        cout<<' '<<n<<endl;
    else
        cout<<endl;

	return 0;
}

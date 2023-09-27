#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i,n;
    cin >> n;
    cout << n << ":" ;
    i=2;
    while(i*i<=n){
        if(n%i==0){
            n/=i;
            cout << " " << i;
        }else{
            i++;
        }
    }
    cout << " " << n;
    cout << endl;
}

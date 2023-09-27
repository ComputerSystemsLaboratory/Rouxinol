#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    bool prime[1000000];
    int n;
    for(long int i=2;i<1000000;i++){
        bool isprime=true;
        for(long int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        prime[i]=isprime;
    }
    while(cin >> n){
        int cnt = 0;
        for(int i=2;i<=n;i++){
            if(prime[i]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
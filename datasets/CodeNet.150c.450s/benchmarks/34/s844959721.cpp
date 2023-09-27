#include <iostream>

using namespace std;
typedef long long ll;

ll memo[40];

ll calc(int n){
    if(memo[n] != -1) return memo[n];
    ll retval = 0;
    for(int i=1;i<=3;i++){
        retval += calc(n-i);
    }
    return memo[n] = retval;
}

int main(){
    for(int i=0;i<40;i++){
        memo[i] = -1;
    }
    memo[1] = 1;
    memo[2] = 2;
    memo[3] = 4;
    calc(30);

    int n;
    while(cin>>n && n != 0){
        cout << calc(n) / 3650 + 1 << endl;
    }
    return 0;
}
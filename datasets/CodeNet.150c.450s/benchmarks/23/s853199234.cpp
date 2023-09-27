#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll table[45];
bool flg[45];

ll fib(int n){

    if(n==0)return 1;
    else if(n==1)return 1;
    else{
        if(flg[n])return table[n];
        else{
            flg[n]=true;
            return table[n]=fib(n-1)+fib(n-2);
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    table[0]=table[1]=1;
    flg[0]=flg[1]=true;
    int n;
    cin >> n;
    cout << fib(n) << endl;
}


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<functional>
#include<math.h>
 
#define rep(i,n) for(ll i=0;i<(n);i++)
typedef long long ll;
using namespace std;

int main(void){
    ll N,K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i,N){
        cin >> A.at(i);
    }
    rep(i,N-K){
        if(A.at(i)<A.at(i+K)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
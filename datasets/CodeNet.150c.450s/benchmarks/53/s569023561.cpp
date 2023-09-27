#include<stdio.h>
#include<vector>
#include<iostream>
#include<map>

using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0;i<(int)(n);i++)

std::map<ll, ll> PrimeFactor(ll n){
    std::map<ll, ll> answer;
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            answer[i]++;
            n /= i;
        }
    }
    if(n!=1)answer[n]=1;
    return answer;
}

int main(){
    ll n;
    cin >> n;
    cout << n << ":";
    for(auto i : PrimeFactor(n)){
        while(i.second--) cout << " " << i.first;
    }
    cout << endl;
}


#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector> 
#include<limits>
#include<numeric>
#include<math.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define in(x) cin >> x
#define out(str) cout << str << endl

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int gcd(int a, int b) {
  return b != 0 ? gcd(b, a % b) : a;
}
int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}
int a,b;

int main(){
    while(cin>>a>>b){
        cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
    }
}


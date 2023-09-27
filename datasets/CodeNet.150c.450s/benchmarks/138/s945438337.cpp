#include <iostream>

using namespace std;

int gcd(int n,int m){
    if(n==m)return n;
    if(n>m)return gcd(n-m,m);
    else return gcd(m-n,n);
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << gcd(n,m) << endl;
  return 0;
}
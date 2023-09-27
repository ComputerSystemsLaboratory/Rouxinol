#include <iostream>
using namespace std;
using ll = long long;

ll fact(ll n) {
    return n==1 ? 1 : n*fact(n-1);
}

int main() {
    int n; cin>>n;
    cout<<fact(n)<<endl;
}

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int d=100000;
    for(int i=0; i<n; i++) {
        d+=d/20;
        d+=999;
        d-=d%1000;
    }
    cout<<d<<'\n';
    return 0;
}


//
//  main.cpp
//  AISING2020C
#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using namespace std;
ll ans[11234]={};
void f(int n){
    ll sums=0;
    for(int x=1;x<(int)sqrt(n);x++){
        for(int y=1;y<(int)sqrt(n);y++){
            for(int z=1;z<(int)sqrt(n);z++){
                sums=x*x+y*y+z*z+x*y+y*z+z*x;
                if(sums>n) break;
                ans[sums]++;
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    f(n);
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}

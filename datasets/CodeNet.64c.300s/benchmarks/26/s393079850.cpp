#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int m,n;
    long long ans1=1,ans2=1,ans=1;
    int div=1000000007;
    while(cin >> m >> n){
    for(int i=0;i<50;i++){
        ans1 *= m;
        if(ans1>div) ans1 = ans1%div;
    }
    for(int j=0;j<n%50;j++){
        ans2 *= m;
        if(ans2>div) ans2 = ans2%div;
    }
    for(int k=0;k<n/50;k++){
        ans *= ans1;
        if(ans>div) ans = ans%div;
    }
    ans *= ans2;
    ans = ans%div;
    cout << ans << endl;
    }
}
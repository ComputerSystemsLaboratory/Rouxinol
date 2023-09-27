
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <utility>
#include <tuple>
using namespace std;

const double pi = acos(-1);
#define nyan cout<<"(=^•ω•^=)"<<endl;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)

int gcd(int i, int j){
    while(true){
        if(i<j)swap(i,j);
        if(!j)break;
        i%=j;
    }
    return i;
}

signed main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y)<<endl;
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <functional>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <cmath>
#define ll long long
#define INF 10000000000000000
#define MOD 998244353
using namespace std;


int main(){
    ll n;
    cin >> n;
    cout<<n<<":";
    while(true){
        int no=1;
        for(ll i=2; i*i<=n; i++){
            if(n%i==0){
                cout<<" "<<i;
                n/=i;
                no=0;
                break;
            }
        }
        if(no==1){
            cout<<" "<<n<<endl;
            break;
        }
    }
    return 0;
}


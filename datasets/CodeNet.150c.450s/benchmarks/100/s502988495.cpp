#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll n,ans=1;
    cin >> n;
    while(n){
        ans*=n;
        n--;
    }
    cout << ans << endl;
    return 0;
}


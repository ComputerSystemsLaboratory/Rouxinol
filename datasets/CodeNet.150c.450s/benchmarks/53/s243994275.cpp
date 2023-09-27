#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) for(int i=0;i<(n);++i)
#define REPR(i,n) for(int i=n;i>=0;i--)
#define ALL(v) (v.begin(),v.end())
#define COUT(x) cout<<(x)<<"\n"

vector<int>prime_number;
 
void prime(int n){
    int r = sqrt(n);
    for(int i=2;i<r+1;i++){
        while(n%i==0){
            n /= i;
            prime_number.push_back(i);
        }
    }
    if(n>1)prime_number.push_back(n);
}

int main(){
    int x;
    cin >> x;
    cout << x << ':';
    prime(x);
    for(int i=0;i<prime_number.size();i++){
        if(i!=prime_number.size())cout << " ";
        cout << prime_number[i];
    }
    cout << endl;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <iomanip>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
 
long long mod = 1000000007;
const long long N=2e5+10;

long long a[N];

long long cnt[N];

int main() {
    
    long long n;
    cin>>n;
    long long sum=0;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
        cnt[a[i]]++;
        
        sum+=a[i];
    }
    long long q;
    cin>>q;
    while(q--){
        long long B,C;
        cin>>B>>C;
        
        sum -= cnt[B]*B;
        sum += cnt[B]*C;
        cnt[C]=cnt[C]+cnt[B];
        cnt[B]=0;
        cout<<sum<<'\n';
        
    }
    
    return 0;
}

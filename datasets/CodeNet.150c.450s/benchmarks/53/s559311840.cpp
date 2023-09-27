#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <iomanip>
#include <deque>
#include <stdio.h>
using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
#define FILL(Itr,n) fill((Itr).begin(),(Itr).end(),n)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define LBOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
#define UBOUND(Itr,val) upper_bound((Itr).begin(),(Itr).end(),(val))
#define MOD 1000000007
typedef long long ll;
typedef pair<int,int> P;

vector<long long> PrimeFactorization(long long n) {
    vector<long long> res;
    long long t = n;
    for(long long i=2;i*i<=t; ){
        if(n%i==0){
            res.push_back(i);
            n/=i;
        }else{
            i++;
        }
    }
    if(n!=1)res.push_back(n);
    return res;
}

int main(){
    
    ll n; cin>>n;
    cout<<n<<": ";
    
    vector<ll> ans = PrimeFactorization(n);
    
    REP(i,ans.size()-1)cout<<ans[i]<<" ";
    cout<<ans[ans.size()-1]<<endl;
    
    return 0;
}
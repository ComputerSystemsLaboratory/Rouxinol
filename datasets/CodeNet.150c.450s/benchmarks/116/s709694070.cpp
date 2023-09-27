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
#include <cstdio>
#include <iomanip>

using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;(i)>=0;(i)--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())

typedef long long ll;


int main(){
    
    
    while(true){
    int n,k;
    cin>>n>>k;
        if(n==0&&k==0)break;
    vector<ll> a(n);
    REP(i,n)cin>>a[i];
    
    ll sum=0;
    REP(i,k)sum+=a[i];
    
    ll ans=sum;
    for(int i=k;i<n;i++){
        sum-=a[i-k];
        sum+=a[i];
        ans=max(ans,sum);
    }
    
    cout<<ans<<endl;
    
    }
    return 0;
}
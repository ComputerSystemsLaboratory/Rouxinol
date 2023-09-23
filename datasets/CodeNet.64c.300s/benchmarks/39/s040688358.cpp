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
using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define BOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
typedef long long ll;

int main(){
    
    
    
    
    int n;
    while(cin>>n){
        int ans=0;
    REP(i,10)REP(j,10)REP(k,10)REP(l,10){
        if(i+j+k+l==n)ans++;
    }
    
        
    cout<<ans<<endl;
    
    }
    
    return 0;
}
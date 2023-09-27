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
#define iREP(i,Itr) for(auto (i)=(Itr).begin();(i)!=(Itr).end();(i)++)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define LBOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
#define UBOUND(Itr,val) upper_bound((Itr).begin(),(Itr).end(),(val))
typedef long long ll;

bool hurui[1000010];
int dp[1000010];

bool isPrime(int n){
    if(n==1)return false;
    if(n==2)return true;
    for(int i=2;i<sqrt(n)+1;i++){
        if((n%i)==0)return false;
    }
    return true;
}

int main(){
    
    REP(i,1000010)hurui[i]=true;
    hurui[0]=hurui[1]=false;
    for(int i=2;i<=1000005;i++){
        if(hurui[i]){
            if(isPrime(i)){
                for(int j=i+i;j<=1000005;j+=i)hurui[j]=false;
            }
        }
    }
    
    REP(i,1000005)dp[i+1]=dp[i]+(hurui[i+1]?1:0);
    
    int t;
    while(cin>>t){
        cout<<dp[t]<<endl;
    }
    
    return 0;
}
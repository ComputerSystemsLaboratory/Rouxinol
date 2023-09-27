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
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define LBOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
#define UBOUND(Itr,val) upper_bound((Itr).begin(),(Itr).end(),(val))
typedef long long ll;

bool isPrime(long long n){
    if(n<=1)return false;
    if(n==2)return true;
    for(long long i=2;i*i<=n;i++){
        if((n%i)==0)return false;
    }
    return true;
}

int main(){
    
    while(true){
        ll a,d,n; cin>>a>>d>>n;
        if(a==0&&d==0&&n==0)break;
        a-=d;
        while(n>0){
            a+=d;
            if(isPrime(a))n--;
        }
        cout<<a<<endl;
    }
    
    return 0;
}
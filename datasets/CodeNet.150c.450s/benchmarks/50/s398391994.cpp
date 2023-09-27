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
    int n;
    cin>>n;
        
        if(n==0)break;
    
    int t=1000-n;
    int ans=0;
    
    ans+=t/500;
    t=t%500;
    
    ans+=t/100;
    t=t%100;
    
    ans+=t/50;
    t=t%50;
    
    ans+=t/10;
    t=t%10;
    
    ans+=t/5;
    t=t%5;
    
    ans+=t;
    
    cout<<ans<<endl;
    }
    
    return 0;
    
}
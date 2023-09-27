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

pair<int,int> judge(vector<int> a, vector<int> b){
    int suma=0,sumb=0;
    REP(i,a.size())suma+=a[i];
    REP(i,b.size())sumb+=b[i];
    
    int minv=1e9;
    pair<int,int> res=make_pair(-1,-1);
    REP(i,a.size()){
        REP(j,b.size()){
            if(suma-a[i]+b[j]==sumb-b[j]+a[i]){
                if(minv>a[i]+b[j]){
                    minv=a[i]+b[j];
                    res=make_pair(a[i],b[j]);
                }
            }
        }
    }
    
    return res;
}

int main(){
    while(true){
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0)break;
        vector<int> a(n),b(m);
        REP(i,n)cin>>a[i];
        REP(i,m)cin>>b[i];
        
        pair<int,int> ans=judge(a,b);
        if(ans.first!=-1){
            cout<<ans.first<<" "<<ans.second<<endl;
        }else{
            cout<<-1<<endl;
        }
    
    }
    
    return 0;
}
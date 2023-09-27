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

int main(){
    
    while(true){
        int n,r; cin>>n>>r;
        if(n==0&&r==0)break;
        
        vector<int> a(n);
        REP(i,n)a[i]=i+1;
        reverse(a.begin(),a.end());
        
        REP(kai,r){
            stack<int> sta;
            int p,c; cin>>p>>c;
            REP(i,c)sta.push(a[i+p-1]);
            REP(i,c)a.erase(a.begin()+p-1);
            REP(i,c){
                a.insert(a.begin(),sta.top());
                sta.pop();
            }
            /*REP(i,a.size())cout<<a[i]<<" ";
            cout<<endl;*/
        }
        
        cout<<a[0]<<endl;
        
    }
    
    return 0;
}
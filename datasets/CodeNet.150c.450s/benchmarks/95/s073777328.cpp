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

using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;(i)>=0;(i)--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())

typedef long long ll;


int main(){
 
    while(true) {
        int n;
        cin>>n;
        if(n==0)break;
        
        bool hl=false;
        bool now[2]={false,false};
        
        int ans=0;
        
        REP(i,n){
            string inst;
            cin>>inst;
            if(inst=="lu")now[0]=true;
            if(inst=="ru")now[1]=true;
            if(inst=="ld")now[0]=false;
            if(inst=="rd")now[1]=false;
            if(now[0]==now[1])if(now[0]!=hl){
                hl=!hl;
                ans++;
            }
        }
        
        cout<<ans<<endl;
    
    }
    return 0;
}
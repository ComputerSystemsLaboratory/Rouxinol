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
        
        map<char,char> M;
        
        REP(i,n){
            char a,b;
            cin>>a>>b;
            M[a]=b;
        }
        
        int s;
        cin>>s;
        string ans;
        
        REP(i,s){
            char t;
            cin>>t;
            if(M.find(t)!=M.end())ans+=M[t];
            else ans+=t;
        }
        
        cout<<ans<<endl;
        
    }
    
    return 0;
    
}
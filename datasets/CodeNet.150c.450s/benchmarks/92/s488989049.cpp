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
    
    int a,b;
    while(cin>>a){
        cin>>b;
        a=a+b;
        if(a==0)cout<<1<<endl;
        else{
            int ans=0;
            while(a!=0){
                ans++;
                a/=10;
            }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}
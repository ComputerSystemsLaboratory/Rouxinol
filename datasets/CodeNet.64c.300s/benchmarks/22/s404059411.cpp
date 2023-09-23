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
    
    int N;
    cin>>N;
    
    REP(i,N){
        int a,b,c;
        cin>>a>>b>>c;
        if(a*a==b*b+c*c)cout<<"YES"<<endl;
        else if(b*b==a*a+c*c)cout<<"YES"<<endl;
        else if(c*c==a*a+b*b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
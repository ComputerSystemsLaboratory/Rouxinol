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

vector<string> M;

int main(){

    while(true){
        int n;
        cin>>n;
        if(n==0)break;
        
        vector<int> a(n);
        REP(i,n)cin>>a[i];
        sort(a.begin(),a.end());
        
        int ans=0;
        for(int i=1;i<n-1;i++){
            ans+=a[i];
        }
        
        cout<<ans/(n-2)<<endl;
        
    }
    
    return 0;
}
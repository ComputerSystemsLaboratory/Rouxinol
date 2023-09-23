#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int c;
int n,s;

void dfs(int flor,bool used[10],int sum,int bef){
    if(flor>=n){
        if(sum==s)c++;
    }
    else{
        for(int i=bef+1;i<10;i++){
            if(used[i]==false){
                used[i]=true;
                dfs(flor+1,used,sum+i,i);
                used[i]=false;
            }
        }
    }
}


int main() {
    while(cin>>n>>s){
        if(n==0 && s==0)break;
        
        c=0;
        bool a[10]={};
        dfs(0,a,0,-1);
        cout<<c<<endl;
    }
    
    return 0;
}
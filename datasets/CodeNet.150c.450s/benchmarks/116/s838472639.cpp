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

#define x first
#define y second


int main() {
    int n,k;
    while(cin>>n>>k){
        if(n==0 && k==0)break;
        int num[200000]={};
        rep(i,n) cin>>num[i];
        
        int now=0;
        rep(i,k){
            now+=num[i];
        }
        int maxi=-1;
        for(int i=1;i<n-k+1;i++){
            now-=num[i-1];
            now+=num[i+k-1];
            maxi=max(now,maxi);
        }
        cout<<maxi<<endl;
    }
    
    return 0;
}

        
        
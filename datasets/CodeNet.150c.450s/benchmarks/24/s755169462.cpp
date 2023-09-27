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

#define DIR second
#define P first


int main() {
    int n,m;
    while(cin>>n>>m){
        if(n==0 && m==0)break;
        vector<pii> data;
        data.clear();
        
        ll sum=0;
        
        rep(i,n){
            int b,a;
            cin>>b>>a;
            data.pb(pii(a,b));
            sum+=a*b;
        }
        
        sort(data.begin(),data.end(),greater<pii>());
        
        for(int i=0;i<n;i++){
            if(data[i].DIR<m){
                sum-=data[i].first*data[i].second;
                m-=data[i].DIR;
            }
            else{
                sum-=m*data[i].P;
                break;
            }
        }
        cout<<sum<<endl;

    }
    
    return 0;
}
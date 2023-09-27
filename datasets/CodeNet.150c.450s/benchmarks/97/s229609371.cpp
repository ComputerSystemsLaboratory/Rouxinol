#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <climits>
#include <cassert>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)
#define INF INT_MAX/3
#define LINF LLONG_MAX/3
#define MP make_pair
#define PB push_back
#define EB emplace_back
#define ALL(v) (v).begin(),(v).end()
#define debug(x) cout<<#x<<":"<<x<<endl
#define debug2(x,y) cout<<#x","<<#y":"<<x<<","<<y<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int dx[4] = {0,1,0,-1};
const int dy[4] = {-1,0,1,0};

int main(){
    int N;
    while(cin>>N){
        if(N==0) break;
        vector<pii> sq(N);
        sq[0].first=0;
        sq[0].second=0;
        for(int i=1;i<N;i++){
            int n,d;cin>>n>>d;
            sq[i].first = sq[n].first+dx[d];
            sq[i].second = sq[n].second+dy[d];
        }


        int l=INF,r=-INF,u=INF,d=-INF;
        for(int i=0;i<N;i++){
            l = min(l,sq[i].second);
            r = max(r,sq[i].second);
            u = min(u,sq[i].first);
            d = max(d,sq[i].first);
        }
        cout << r-l+1 << " " << d-u+1 << endl;
    }
}
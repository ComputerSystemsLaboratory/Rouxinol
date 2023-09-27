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
#define rep(i,n) for(int i=0;i<n;i++)
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

int years[1000];
int days[2][11];

void init(){
    int i;
    for(i=0;i<1000;i++){
        years[i]=0;
        if(i%3==0){
            years[i] = 200;
        }else{
            years[i] = 195;
        }
    }
    for(i=1;i<=10;i++){
        days[0][i] = days[1][i] = 20;
        if(i%2==0) days[0][i]=19;
    }
}

void solve(){
    int y,m,d;
    cin >> y >> m >> d;
    int ans = 0;
    for(int i=y+1;i<1000;i++){
        ans += years[i];
    }

    for(int i=m+1;i<=10;i++){
        if(y%3!=0) ans += days[0][i];
        else ans += days[1][i];
    }

    int k=0;
    if(y%3==0) k=1;
    for(int i=d;i<=days[k][m];i++){
        ans++;
    }
    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;
    init();
    for(int i=0;i<n;i++) solve();
}
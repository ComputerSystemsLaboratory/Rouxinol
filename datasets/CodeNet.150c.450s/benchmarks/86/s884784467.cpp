#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>
#include <set>
#include <map>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long ll;
typedef std::pair<int,int> pii;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main() {
    int n,m,p;
    while(1){
    cin>>n>>m>>p;
    if(n==0&&m==0&&p==0)break;
    m--;
    vector<int> v(n,0);
    int sum=0;
    rep(i,0,n){
        cin>>v[i];
        sum+=v[i]*100;
    }
    sum-=(sum*p)/100;
    cout<<((v[m]==0)?0:sum/v[m])<<endl;
    }
    return 0;
}


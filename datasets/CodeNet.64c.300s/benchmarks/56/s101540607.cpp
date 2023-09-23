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
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

int solve(int y,int m,int d){
    //344 3 1
    int ret=0;
    ret+=(y-1)*(39*5);
    ret+=(int)((y-1)/3)*5;
    ret+=(m-1)*19;
    ret+=( (m-1)+1 )/2;
    if(y%3==0)ret+=(m-1)/2;
    ret+=d-1;
    return ret;
}

int main(){
    int n;
    cin>>n;
    rep(i,n){
        int y,m,d;
        cin>>y>>m>>d;
        cout<<solve(1000,1,1)-solve(y,m,d)<<endl;
    }
    return 0;
}
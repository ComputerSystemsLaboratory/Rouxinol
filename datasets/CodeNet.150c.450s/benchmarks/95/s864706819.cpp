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
#define REP(i,m,n) for(int i=(m);i<(n);i++)
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;


int main(){
    int n;
    while(cin>>n){
        int c=0;
        bool now=false;
        bool l=false;
        bool r=false;
        if(n==0)break;
        
        rep(i,n){
            string tm;
            cin>>tm;
            if(tm=="lu")l=true;
            if(tm=="ru")r=true;
            if(tm=="ld")l=false;
            if(tm=="rd")r=false;
            if(l!=now && r!=now){
                c++;
                now=!now;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
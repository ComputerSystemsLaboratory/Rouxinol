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
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;




int main(){
    int e;
    while(cin>>e){
        if(e==0)break;
        
        int mi=INF;
        rep(i,1001){
            rep(j,101){
                int a=(e-(i*i + j*j*j) );
//                cout<<i<<" "<<j<<" "<<a<<endl;
                if(a<0)break;
                mi=min(mi,a+i+j);

            }
        }
        cout<<mi<<endl;
    }
    
    return 0;
}
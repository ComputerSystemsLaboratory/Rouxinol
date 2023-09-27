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

ll m[20][20];
int a,b,n;

int main() {
    while(cin>>a>>b){
        rep(i,20) rep(j,20) m[i][j]=0;

        if(a==0 && b==0)break;
        cin>>n;
        rep(i,n){
            int a,b;
            cin>>a>>b;
            a--;b--;
            m[a][b]=-100;
        }
    
        m[0][0]=1;
        rep(i,a){
            rep(j,b){
                if(m[i][j]!=-100){
                    if(i-1>=0 && m[i-1][j]!=-100)m[i][j]+=m[i-1][j];
                    if(j-1>=0 && m[i][j-1]!=-100)m[i][j]+=m[i][j-1];
                }
            }
        }
        
        cout<<m[a-1][b-1]<<endl;
    }
    
    return 0;
}

        
        
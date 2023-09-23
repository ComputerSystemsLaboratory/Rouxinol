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

int main(){
    int x,y,s;
    while(cin>>x>>y>>s){
        int maxi=-1;
        if(x==0 && y==0 && s==0)break;
        
        for(int i=1;i<s-1;i++){
            for(int j=1;j<s-1;j++){
                if((int)(i*(100+x)/100)+(int)(j*(100+x)/100)==s){
                    maxi=max(maxi,(int)(i*(100+y)/100)+(int)(j*(100+y)/100));
                }
            }
        }
        cout<<maxi<<endl;
    }
}
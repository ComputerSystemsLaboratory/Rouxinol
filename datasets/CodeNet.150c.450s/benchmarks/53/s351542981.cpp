#include <numeric>
#include<iostream>
#include<set>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include <sstream>
#include<string>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
#define inf 1000000007
#define int long long
#define rep(i,j,n) for(int i=j;i<n;i++)
typedef pair<int,int>  P;
struct edge{int from,to,cost;};
double pi = 3.141592653589793;
//使うやつはここから下に置こうな
signed main(){
    int n;cin>>n;
    int t=n;
    cout<<n<<":";
    for(int i=2;i*i<=n;i++){
        while(t%i==0){
            t/=i;
            cout<<" "<<i;
        }
    }
    if(t!=1)cout<<" "<<t;
    cout<<endl;
    return 0;
}

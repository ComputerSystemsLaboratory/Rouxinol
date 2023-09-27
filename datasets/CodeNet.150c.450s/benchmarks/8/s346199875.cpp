#include <numeric>
#include<iostream>
#include<set>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include <sstream>
#include<string.h>
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
    int tans=0,hans=0;
    rep(i,0,n){
        string t,h;cin>>t>>h;
        if(t>h)tans+=3;
        else if(h>t)hans+=3;
        else {
            hans++;tans++;
        }
    }
    cout<<tans<<" "<<hans<<endl;
    return 0;
}


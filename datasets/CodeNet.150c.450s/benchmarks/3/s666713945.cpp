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
    string s;cin>>s;
    int n;cin>>n;
    rep(i,0,n){
        string m,k;int a,b;cin>>m>>a>>b;
        if(m=="print"){
            string ans=s.substr(a,b-a+1);
            cout<<ans<<endl;
        }
        else if(m=="reverse")reverse(s.begin()+a,s.begin()+b+1);
        else{
            cin>>k;
            s.replace(a,b-a+1,k);
        }
    }
    return 0;
}

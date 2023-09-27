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
 
 typedef vector<int> VI;
 typedef pair<int,int> pii;
 typedef long long ll;
 
 #define dump(x)  cerr << #x << " = " << (x) << endl
 #define rep(i,n) for(int i=0;i<(n);i++)
 #define ALL(a)  (a).begin(),(a).end()
 #define PB push_back
 #define sz size()
 
 const double EPS = 1e-10;
 const int INF = 100000000;
 
 int solve(int n){
 int ret=0;
 int m[]={500,100,50,10,5,1};
 rep(i,6){
 ret+=n/m[i];
 n-=m[i]*(n/m[i]);
 }
 return ret;
 }
 
 
 int main(){
 int n;
 while(cin>>n){
 if(n==0)break;
 cout<<solve(1000-n)<<endl;;
 }
 
 return 0;
 }
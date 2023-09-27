#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <map>
//#include <cmath>
//#include <string>
//#include <sstream>
//#include <iomanip>
//#include <complex>
using namespace std;
 
//#define ll long long
//#define vvi vector< vector<int> >
//#define All(X) X.begin(),X.end()
//#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
//#define pb push_back 
//ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
//ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
  while(1){
    int n, p;
    cin >> n >> p;
    if(n==0&&p==0) break;
    int kago=p;
  	int pc[100]={0};
    int i=0;
    while(1){
      int nowc=i%n;
      if(pc[nowc]==p){
	cout << nowc << endl;
	break;
      }
      if(kago>0){
	kago--;
	pc[nowc]++;
      }
      else{
	kago=pc[nowc];
	pc[nowc]=0;}
      i++;
    }
  }
  return 0;
}
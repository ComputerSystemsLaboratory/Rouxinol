#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;
 
#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
int main(){

  while(1){
    int n,r;
    cin>>n >>r;
    if(n==0&&r==0)  break;
    int cards[n-1];
    REP(i,n){
      cards[i] = (n-i);
    }
    int help[100]={0};
    int p[100];
    int c[100];
    REP(i,r){
      cin>>p[i]>>c[i];
      REP(j,c[i]){
	help[c[i]-j-1] = cards[p[i]+c[i]-2-j];
      }
      for(int j=0;(p[i]-1-j)>=0;j++){
	if((p[i]-1-j)<0) break;
	cards[p[i]+c[i]-2-j] = cards[p[i]-2-j];
      }
      REP(j,c[i]){
	cards[j]=help[j];
      }
    }
    cout << cards[0] << endl;
  }
  return 0;
}
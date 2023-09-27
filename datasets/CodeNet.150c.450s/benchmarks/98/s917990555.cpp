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
    int t, h;
    int sumt=0; //taro
    int sumh=0; //hanako
    cin >> t >> h;
    if(t==0&&h==0) break;
    int tcard[100]={0};
    int hcard[100]={0};
    REP (i,t) {
      cin >> tcard[i];
      sumt += tcard[i];
      //      cout << sumt << endl;//debug
    }
    REP (j,h){
      cin >> hcard[j];
      sumh += hcard[j];
      //      cout << sumh << endl;//debun
    }

    int a=100,b=100;
    bool was = false;

    REP(k,t){
      REP(l,h){
	if(((sumt-tcard[k]+hcard[l])==(sumh+tcard[k]-hcard[l])) && (tcard[k]+hcard[l] < a+b)){
	  a=tcard[k];
	  b=hcard[l];
	  was = true;
	  //	  cout << a << " " << b << endl;
	}
      }
    }
    if(was){
      cout << a << " "<< b << endl;
    }else{
      cout << "-1" <<endl;
    }
  }
}
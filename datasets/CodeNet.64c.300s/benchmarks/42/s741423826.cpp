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

  int n;

  while (cin >> n,n){
    int x[100];
    int y[100];

    int gem[25][25] = {0};

    REP(i,n){
      cin >> x[i] >> y[i];
      gem[x[i]][y[i]] = 1;
    }
    int m;

    cin >> m;

    char d[100];
    int l[100];

    int nowx=10;
    int nowy=10;

    REP(j,m){
      cin >> d[j] >> l[j];
      if (d[j]=='E'){
	REP(k,l[j]){
	  nowx ++;
	  gem[nowx][nowy]=0;
	}
      }else if(d[j]=='W'){
	REP(k,l[j]){
	  nowx --;
	  gem[nowx][nowy]=0;
	}
      }else if(d[j]=='S'){
	REP(k,l[j]){
	  nowy --; 
	  gem[nowx][nowy]=0;
	} 
      }else if(d[j]=='N'){
	REP(k,l[j]){
	  nowy ++;
	  gem[nowx][nowy]=0;
	}
      }
      //      cout << nowx << "," << nowy << endl; //
    }
    int tf=0;


    /*  
	REP(piyo,25){
	REP(are,25){
	cout << gem[piyo][are] << ",";
	}}
    */


    REP(hoge,25){
      REP(huga,25){
	tf += gem[hoge][huga];
      }
    }

    if(tf){
      cout<<"No"<<endl;
    }else{
      cout<<"Yes"<<endl;
    }
  }
}
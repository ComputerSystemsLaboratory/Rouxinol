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
  cin >> n;

  int y,m,d;
  int day=0;

  REP(i,n){

	cin >> y >> m >> d;

	if(y%3!=0&&m%2==0){
	  day=19-d+1;
	}else{
	  day=20-d+1;
	}

	//cout << y%3 << endl;//
	//cout << m%2 << endl;//

	m++;
	if(m>10){
	  m=1;
	  y++;
	}
	while(m<=10&&y<1000){
	  if(y%3!=0&&m%2==0){
		day += 19;
	  }else{
		day += 20;
	  }
	  m++;
	  //cout << y%3 << endl;//
	  //cout << m%2 << endl;//

}

	y++;

	//cout << y <<endl;//

	while(y<1000){
	  if(y%3==0){
		day+=(20*10);
	  }else{
		day+=(19*5+20*5);
	  }
	  y++;
	}

	cout << day << endl;

  }

}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

int main(){
	int m;
	scanf("%d",&m);
	rep(i,m){
		set<string> ss;
		string in; cin>>in;
		REP(i,1,in.size()){
			string s1 = in.substr(0,i);
			string s2 = in.substr(i);
			string rs1 = string(s1.rbegin(),s1.rend());
			string rs2 = string(s2.rbegin(),s2.rend());
			ss.insert( s1+s2 ); ss.insert( s1+rs2 );
			ss.insert( rs1+s2 ); ss.insert( rs1+rs2 );
			ss.insert( s2+s1 ); ss.insert( s2+rs1 );
			ss.insert( rs2+s1 ); ss.insert( rs2+rs1 );
		}
		cout << ss.size() << endl;
	}
	return 0;
}
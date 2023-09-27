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
	map<string,int> msi;
	string in,lstr,mstr;
	int sz = 0;
	while(cin>>in){
		if( sz<in.size() ){
			lstr = in;
			sz = in.size();
		}
		msi[in]++;
	}
	map<string,int>::iterator it;
	int k = 0;
	for(it=msi.begin(); it!=msi.end(); it++){
		if( k < it->second ){
			k = it->second;
			mstr = it->first;
		}
	}
	cout << mstr << " " << lstr << endl;
	
	return 0;
}
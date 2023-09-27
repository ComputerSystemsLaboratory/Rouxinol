#include<string>
#include<vector>
#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<functional>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<utility>
#include<cmath>
#include<ctime>
#include<complex>

using namespace std;

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)


int main(){

	int a,b;
	while(true){

	cin >> a >> b;
	if(a==0 && b==0) break;

	vector<int>v;

	v.push_back(0);
	v.push_back(31);
	v.push_back(29);
	v.push_back(31);
	v.push_back(30);
	v.push_back(31);
	v.push_back(30);
	v.push_back(31);
	v.push_back(31);
	v.push_back(30);
	v.push_back(31);
	v.push_back(30);
	v.push_back(31);

	int d=b;
	rep(i,a) d+=v[i];

	if(d%7==0) cout << "Wednesday" << endl;
	if(d%7==1) cout << "Thursday" << endl;
	if(d%7==2) cout << "Friday" << endl;
	if(d%7==3) cout << "Saturday" << endl;
	if(d%7==4) cout << "Sunday" << endl;
	if(d%7==5) cout << "Monday" << endl;
	if(d%7==6) cout << "Tuesday" << endl;

	}

	return 0;
}
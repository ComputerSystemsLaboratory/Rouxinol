#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<functional>
#include<map>
#include<stack>
#include<set>
#include<cmath>

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)

#define EPS 1e-6

using namespace std;

int main(){

	int n;
	double x1,y1,x2,y2,x3,y3,x4,y4;

	cin >> n;

	rep(i,n){

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	double a=y2-y1; double b=x2-x1;
	double d=y4-y3; double e=x4-x3;

	if(a*e-d*b==0) cout << "YES" << endl;
	else cout << "NO" << endl;

	}

	return 0;
}
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

#define REP(i,s,e) for(int i=int(s);i<int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)

#define EPS 1e-6

using namespace std;

int main(){

	stack<int>cars;

	int a;
	while(true){

	cin >> a;
	if(cin.fail()) break;

	if(a!=0) cars.push(a);
	else{
	     cout << cars.top() << endl;
	     cars.pop();
	}
	}

	return 0;
}
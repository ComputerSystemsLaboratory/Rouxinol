#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<cmath>
#include<ctime>
#include<complex>

using namespace std;

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)


int main(){

	int a[6]={500,100,50,10,5,1};
	int b,s;
	while(true){

	cin >> b;
	if(b==0) break;

	int coins=0;
	s=1000-b;
	rep(i,6){

	coins+=s/a[i]; s%=a[i];

	}

	cout << coins << endl;

	}

	return 0;
}
#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <functional>
#include <cassert>
#include <iomanip>
#include <array>
#include <time.h>
#include <limits.h>
#pragma comment(lib, "winmm.lib")
#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<=(b);i++)


using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	stack<int> S;
	string tmp;
	int pop1, pop2;
	while (cin >> tmp){
		if (tmp == "+"){
			pop1 = S.top();
			S.pop();
			pop2 = S.top();
			S.pop();
			S.push(pop1 + pop2);
		}
		else if (tmp == "-"){
			pop1 = S.top();
			S.pop();
			pop2 = S.top();
			S.pop();
			S.push(pop2 - pop1);
		}else if (tmp == "*"){
			pop1 = S.top();
			S.pop();
			pop2 = S.top();
			S.pop();
			S.push(pop1 * pop2);
		}else if (tmp == "/"){
			pop1 = S.top();
			S.pop();
			pop2 = S.top();
			S.pop();
			S.push(pop2 / pop1);
		}
		else{
			S.push(stoi(tmp));
		}
	}

	cout << S.top() << endl;
	return 0;
}
#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x);
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 1000000000;
typedef double D;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={-1, 0, 1, 0}, dy[4]={0, -1, 0, 1};
using namespace std;
//typedef pair<int, int> P;

/** problem1137 : Numeral System **/
int toNum(string s)
{
	int p=0;
	int ret=0;
	while (p<s.size()) {
		int m=1;
		
		if (isdigit(s[p])) {
			m = s[p]-'0';
			p++;
		}
		
		if (s[p] == 'm')
			ret += m*1000;
		if (s[p] == 'c')
			ret += m*100;
		if (s[p] == 'x')
			ret += m*10;
		if (s[p] == 'i')
			ret += m;
		
		p++;
	}
	return ret;
}

string toMCXI(int n)
{
	string ret;
	
	int m=0;
	while (n>=1000) {
		n-=1000; m++;
	}
	if (m>1) {
		ret += m+'0';
		ret += 'm';
	} else if (m==1)
		ret += 'm';
	
	m=0;
	while (n>=100) {
		n-=100; m++;
	}
	if (m>1) {
		ret += m+'0';
		ret += 'c';
	} else if (m==1)
		ret += 'c';
	
	m=0;
	while (n>=10) {
		n-=10; m++;
	}
	if (m>1) {
		ret += m+'0';
		ret += 'x';
	} else if (m==1)
		ret += 'x';
	
	m=0;
	while (n>=1) {
		n-=1; m++;
	}
	if (m>1) {
		ret += m+'0';
		ret += 'i';
	} else if (m==1)
		ret += 'i';
	
	return ret;
}

int main()
{
	int N; cin>>N;
	rep(i, N) {
		string a, b;
		cin>>a>>b;
		int sum = toNum(a) + toNum(b);
		cout << toMCXI(sum) << endl;
	}
}
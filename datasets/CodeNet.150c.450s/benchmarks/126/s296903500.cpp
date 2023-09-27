//============================================================================
// Name        : TopCoderCompetition.cpp
// Author      : taguchi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bitset>
#include <algorithm>
#include <map>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <numeric>
#include <list>
#include <sstream>
using namespace std;
//#define P pair<int,int>
#define max 999999
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(ull i = 0;i<n;i++)
#define pb(n) push_back(n)

typedef vector<int> vi;
typedef vector<string> vs;
struct edge{int cost,to;};

vector<string> split(string &in,char delimiter){
	vector<string> re; uint cur = 0,next;
	while((next = in.find_first_of(delimiter,cur)) != string::npos){
		re.pb(string(in,cur,next-cur));
		cur = next + 1;
	}
	re.pb(string(in,cur,in.size()-cur));
	return re;
}
vector<int> split_int(string &in, char delimiter){
	vector<string> str = split(in,delimiter);
	vector<int> re;
	rep(i,str.size()){
		re.pb(strtol(str[i].c_str(),NULL,10));
	}
	return re;
}

class Range{
public:
	int a,b;
	Range(int an,int bn) : a(an),b(bn){}

	bool operator()(int n){
		return a<=n&&n<=b;
	}
	bool isCross(Range x){
		return x(a) || x(b);
	}
	bool contains(Range x){
		return this->a <= x.a && x.b <= this->b;
	}
};


int main(){
	while(1){
		int a,b;
		cin >> a >> b;
		if(a == 0 && b == 0) break;
		int s[20][20],cons[20][20];
		memset(s,0,sizeof(s));
		memset(cons,0,sizeof(cons));
		s[1][1] = 1;
		int n;
		cin >> n;
		rep(i,n){
			int p,q;
			cin >> p >> q;
			cons[p][q] = -1;
		}
		for(int i = 1;i<=18;i++)for(int j = 1;j<=18;j++){
			if(i == 1 && j == 1)continue;
			if(cons[i][j] == -1)continue;
			s[i][j] = ((cons[i-1][j] == 0) ? s[i-1][j] : 0) + ((cons[i][j-1] == 0) ? s[i][j-1] : 0);
		}
		cout << s[a][b] << endl;
	}
	return 0;
}
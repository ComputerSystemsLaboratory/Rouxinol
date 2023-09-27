#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>

#define rep(i, a) REP(i, 0, a)
#define REP(i, a, b) for(int i = a; i < b; ++i)

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> P;
typedef std::pair<P, int> PP;
const double PI = 3.14159265358979323846;
const double esp = 1e-9;
const int infi = (int)1e+9 + 10;
const ll infll = (ll)1e+17 + 10;

int dice[6];
int dir = 0;

class Dice{
public:
	//(front,back,up,down,right,left) = (1,3,5,0,2,4)
	int dat[6];

	void front(){
		int tmp = dat[0];
		dat[0] = dat[1];
		dat[1] = dat[5];
		dat[5] = dat[3];
		dat[3] = tmp;
	}
	void back(){
		int tmp = dat[0];
		dat[0] = dat[3];
		dat[3] = dat[5];
		dat[5] = dat[1];
		dat[1] = tmp;
	}
	void right(){
		int tmp = dat[0];
		dat[0] = dat[2];
		dat[2] = dat[5];
		dat[5] = dat[4];
		dat[4] = tmp;
	}
	void left(){
		int tmp = dat[0];
		dat[0] = dat[4];
		dat[4] = dat[5];
		dat[5] = dat[2];
		dat[2] = tmp;
	}
};

Dice d;

int main(){
	std::cin >> d.dat[5] >> d.dat[1] >> d.dat[2] >> d.dat[4] >> d.dat[3] >> d.dat[0];
	std::string s;
	std::cin >> s;
	rep(i, s.size()){
		if (s[i] == 'S')d.front();
		if (s[i] == 'N')d.back();
		if (s[i] == 'E')d.right();
		if (s[i] == 'W')d.left();
	}
	std::cout << d.dat[5] << std::endl;
	return 0;
}
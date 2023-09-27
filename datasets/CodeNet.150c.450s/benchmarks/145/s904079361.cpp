#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <map>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;
typedef vector<long long int> vi;
typedef vector<long long int>::iterator vit;

int main(){
	map<string, int>table;
	string s, f, l;
	string::iterator it = s.begin();
	size_t n = 0;
	while (cin >> s){
		table[s]++;
		if (table[s] > n){
			n = table[s];
			f = s;
		}
		if (s.size() > l.size()){
			l = s;
		}
	}
	cout << f << " " << l << endl;
}
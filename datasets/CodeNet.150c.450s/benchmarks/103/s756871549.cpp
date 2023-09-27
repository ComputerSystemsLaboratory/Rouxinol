#include <iostream>
#include <vector>
using namespace std;
#define rep2(x,from,to) for(int x=(from); x<(to); (x)++)
#define rep(x,to) rep2(x,0,to)
vector<int> v;
int ret = 0;
void check(int s) {
	int total = 0;
	for(int x : v) {
		total += x;
	}
	if(s == total) ret++;
}
void select(int a, int l, int s) {
	if(!l) {
		check(s);
		return;
	}
	rep2(i,a,10) {
		v.push_back(i);
		select(i+1, l-1, s);
		v.pop_back();
	}
}
		
int main() {
	int n, s;
	while(cin >> n >> s && (n || s)) {
		select(0, n, s);
		cout << ret << endl;
		ret= 0;
	}
	return 0;
}
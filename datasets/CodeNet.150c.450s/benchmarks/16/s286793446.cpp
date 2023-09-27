#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)


int main() {
	string str;
	cin >> str;
	multimap<int, int> m;
	int max = 0, min = 0, v[20010];
	v[0] = 0;
	m.insert(make_pair(0, 0));
	rep(i,str.size()) {
		if(str[i] == '\\') {
			v[i+1] = v[i] - 1;
			m.insert(make_pair(v[i+1], i+1));
			if(min > v[i+1]) min = v[i+1];
		} else if(str[i] == '/') {
			v[i+1] = v[i] + 1;
			m.insert(make_pair(v[i+1], i+1));
			if(max < v[i+1]) max = v[i+1];
		} else {
			v[i+1] = v[i];
			m.insert(make_pair(v[i+1], i+1));
		}
	}
	int f[20010];
	bool b[20010];
	rep(i,str.size()+1) {
		b[i] = true;
	}
	for(int i = max; i >= min; --i) {
		int c = m.count(i);
		int e[2];
		auto begin = m.find(i);
		e[0] = begin->second;
		if(c < 2) {
			if(b[e[0]]) {
				f[e[0]] = 0;
				b[e[0]] = false;
				continue;
			}
		}
		auto end = m.upper_bound(i);
		end--;
		e[1] = end->second;
		rep2(j,e[0],e[1]+1) {
			if(b[j]) f[j] = i - v[j];
			b[j] = false;
		}
	}
	//rep(i,str.size()+1){
	//	cout << f[i] << endl;
	//}
	vector<int> ret;
	int pre = 0, count = 0;
	rep(i,str.size()+1) {
		if(f[i]) {
			count += f[i];
			pre = f[i];
		} else {
			if(pre) {
				ret.push_back(count);
				count = pre = 0;
			}
		}
	}

	int total = 0;
	rep(i,ret.size()) {
		total += ret[i];
	}
	cout << total << endl;
	cout << ret.size();
	rep(i,ret.size()) {
		cout << " " << ret[i];
	}
	cout << endl;
	return 0;
}
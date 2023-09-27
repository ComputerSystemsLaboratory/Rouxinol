#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

template<typename t1, class t2>
void input(t1 count,t2 array) {
	for(t1 i = 0;i < count;i++) {
		cin >> array[i];
	}
}

template<typename t1, class t2>
void output(t1 count,t2 array) {
	for(t1 i = 0;i < count;i++) {
		cout << array[i];
		if(i != count - 1) cout << " ";
	}
	cout << endl;
}

int n,s[100000],t[50000],q,c;

class bitset{
private:
	unsigned char* data;
public:
	bitset(unsigned int size) {
		data = new unsigned char[size / 8 + 1];
		memset(data,0,size / 8 + 1);
	}
	bool get(unsigned int index) {
		return data[index / 8] & (1 << (index % 8));
	}
	void set(unsigned int index) {
		data[index / 8] = data[index / 8] | (1 << (index % 8));
	}
};

unsigned int hs(string s) {
	unsigned int res = 0;
	for(int i = s.size()-1;i >= 0;i--) {
		res = res * 5;
		switch(s[i]) {
		case 'A':
			res += 1;
			break;
		case 'C':
			res += 2;
			break;
		case 'G':
			res += 3;
			break;
		case 'T':
			res += 4;
			break;
		}
	}
	return res;
}

int main(int argc,char** argv) {
	cin >> n;
	string s[2];
	bitset b(pow(5,12));
	for(int i = 0; i < n;i++) {
		cin >> s[0] >> s[1];
		if(s[0] == "insert") b.set(hs(s[1]));
		else {
			if(b.get(hs(s[1]))) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
}


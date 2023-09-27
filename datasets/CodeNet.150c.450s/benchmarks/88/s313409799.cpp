#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<utility>
#include<queue>
#include<stack>
#include<set>
#include<functional>
#define pi 3.14159
#define Inf (int)pow(2., 12.)

using namespace std;
typedef std::pair<int, int> mypair;
queue<mypair> qu;
#define M 1000000
const int dy[4] = {0, 1, 0, -1}, dx[4] = {1, 0, -1, 0};
#define N 123456 
int num = 0;

int ToInt(string str) {
	int a = 0, n = (int)str.size();
	for(int i = 0; i < n; i++) {
		a += (str[i]-'0') * (int)pow(10., (double)(n-i-1));
	}
	return a;
}

string ToString(int a, int l) {
	string str;
	if(l == 6) str = "000000";
	if(l == 5) str = "00000";
	if(l == 4) str = "0000";
	if(l == 3) str = "000";
	if(l == 2) str = "00";
	if(l == 1) str = "0";
	for(int i = 0; i < l; i++) {
		int n = a / (int)pow(10., (double)(l-i-1));
			str[i] = n + '0';
			a -= n * (int)pow(10., (double)(l-i-1));
			}

	return str;
}
int dia(int h, int w) {
	return h*h + w*w;
}

void tan(int d) {
		for(int i = 1; i < 150; i++) {
			for(int j = i+1; j < 150; j++) {
				if(dia(i, j) == d) {
					cout << i << " " << j <<endl;
					return;
				} else if(dia(i, j) > d) break;
			}
		}
		tan(d + 1);
}

int main(){
	int h, w;
	while(cin >> h >> w) {
		if(h + w == 0) break;
		bool bo2 = false;
		for(int i = h+1; i < 150; i++) {
			for(int j = i+1; j < 150; j++) {
				if(dia(i, j) == dia(h, w)) {
					h = i;
					w = j;
					bo2 = true;
					break;
				} else if(dia(i, j) > dia(h,w)) break;
			}
			if(bo2) break;
		}
		if(bo2) cout << h << " " << w <<endl;
		else tan(dia(h, w) + 1);
	}
	return 0;
}
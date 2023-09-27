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

int main(){
	int l;
	string str;
	while(cin >> str >> l) {
		if(l == 0) break;
		int a[21], i, j;
		a[0] = ToInt(str);
		str = ToString(a[0], l);
		for(i = 0; i < 20; i++) {
			int max, min;
			sort(str.begin(), str.end());
			min = ToInt(str);
			reverse(str.begin(), str.end());
			max = ToInt(str);
			a[i+1] = max - min;
			bool bo = false;
			for( j = 0; j < i+1; j++) {
				if(a[j] == a[i+1]) {
					bo = true;
					break;
				}
			}
			if(bo) break;
			str = ToString(a[i+1], l);
		}
		cout << j << " " << a[j] << " " << i+1-j <<endl;
 	}
	return 0;
}
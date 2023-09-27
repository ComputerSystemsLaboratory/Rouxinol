#include <cstdio>
#include <iostream>
#include <string.h>

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

using namespace std;

int main() {
	int t;
	cin >> t;
	int m = t % 3600;	
	cout << t / 3600 << ":" << m / 60 << ":" << m % 60 << endl;
	return 0;
}
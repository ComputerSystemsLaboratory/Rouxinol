#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<math.h>
#include<queue>
#include <algorithm>
#include<functional>
#include<cstdlib>
#include<cmath>


#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

typedef pair<int, int> P;
typedef pair<long, long> LP;
typedef pair<int, P> PP;
typedef pair<long, LP> LPP;

int N;

int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };

int day = 0, month = 0;

void input(void) {
	CI month >> day;
	return;
}


int main(void) {
	int weekday = 0;
	int y = 2004;

	string dayname[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	while (true) {
		input();
		if (day == 0) {
			break;
		}
		if (month < 3) {
			y--; month += 12;
		}
		weekday =  (y + (y / 4) - (y / 100) + (y / 400) + (13 * month + 8) / 5 + day) % 7;
		y = 2004;
		CO dayname[weekday] E
	}
	
	return 0;
}
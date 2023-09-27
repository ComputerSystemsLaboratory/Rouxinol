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


void input(void) {
	
	return;
}


int main(void) {


	int answer = 0;
	
	while (CI N) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				for (int k = 0; k < 10; k++) {
					for (int l = 0; l < 10; l++) {
						if (i + j + k + l == N) {
							answer++;
						}
					}
				}
			}
		}

		CO answer E
		answer = 0;
	}
	
	return 0;
}
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
#define pi 3.14159
#define Inf (int)pow(2., 12.)

using namespace std;
typedef std::pair<int, int> mypair;
queue<mypair> qu;
#define M 1000000
const int dy[4] = {0, 1, 0, -1}, dx[4] = {1, 0, -1, 0};
#define N 123456 
int num = 0;


int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int y, m, d, count = 0;
		cin >> y >> m >> d;
		for(int j = m; j <= 10; j++) {
			if(y % 3 == 0 || j % 2 == 1) {
				if(j == m) {
					for(int k = d; k <= 20; k++) {
						count++;
					}
				} else {
					for(int k = 1; k <= 20; k++) {
						count++;
					}
				}
			} else if(j % 2 == 0) {
				if(j == m) {
					for(int k = d; k <= 19; k++) {
						count++;
					}
				} else {
					for(int k = 1; k <= 19; k++) {
						count++;
					}
				}
			}
		}
		for(int j = y+1; j < 1000; j++) {
			if(j % 3 == 0) count += 10*20;
			else count += 5*20 + 5*19;
		}
		cout << count <<endl;
	}

	
	return 0;
}
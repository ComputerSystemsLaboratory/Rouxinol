#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;
#define FOR(I,N) for(int I = 0; I < (int)(N); I++)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
int num[10];
int B[10];
int C[10];
bool flag;
void solve(int, int, int);

int main(void){
	int N;
	cin >> N;
	for(int k = 0; k < N; k++){
		flag = false;
		fill_n(B , 10, -1);
		fill_n(C , 10, -1);
		for(int i = 0; i < 10; i++){
			cin >> num[i];
		}
		solve(0, 0, 0);
		if(flag){cout << "YES" << endl; continue;}
		cout << "NO" << endl;
	}

	return 0;
}

void solve(int cnt,int right, int left){
	if(cnt == 10){
		flag = true;
		return;
	}
	if(num[cnt] > right) solve(cnt+1, num[cnt], left);
	if(num[cnt] > left) solve(cnt+1, right, num[cnt]);
}
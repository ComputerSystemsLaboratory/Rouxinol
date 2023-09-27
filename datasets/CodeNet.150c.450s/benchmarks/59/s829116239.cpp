#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
	int n;
	cin >> n;
	int A[1001];
	rep(i, n){
		cin >> A[i];
		if(i > 0)cout << " ";
		cout << A[i];
	}
	FIN("");
	for(int i = 1; i < n; i++){
		int j = i - 1;
		int memo = A[i];
		while(A[j] > memo && j >= 0){
			A[j+1] = A[j];
			j--; 
		}
		A[j+1] = memo;
		rep(k, n){
			if(k > 0)cout << " ";
			cout << A[k];
		}
		FIN("");
	}

	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}
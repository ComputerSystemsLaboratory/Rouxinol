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
#define INF (1 << 28)

template<typename T>
void remove(vector<T>& vector, unsigned int index){
vector.erase(vector.begin() + index);
}
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main(void){
	int n, r;
	while(cin >> n >> r, n | r){
		int card[n];
		card[0] = n;
		for(int i = 1; i < n; i++)card[i] = card[i-1]-1;
		rep(i,r){
			int p, c;
			cin >> p >> c;
			int abv[p];
			for(int j = 0; j < p-1; j++){
				abv[j] = card[j];
			}
			for(int j = 0; j < c; j++){
				card[j] = card[p-1+j];
			}
			for(int j = 0; j < p-1; j++){
				card[c+j] = abv[j];
			}
		}
		cout << card[0] << endl;
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
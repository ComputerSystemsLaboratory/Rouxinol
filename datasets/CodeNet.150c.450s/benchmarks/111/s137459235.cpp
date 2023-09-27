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

int memb[201];
long long memo[201][31];
int n;

long long func(int index, int sum){
	if(sum < 0 || sum > 20)return 0;
	if(memo[index][sum] != -1){
		return memo[index][sum];
	}
	if(index == n-1){
		return (sum == memb[n-1]);
	}
	return (memo[index][sum] = func(index+1, sum + memb[index]) + func(index+1, sum - memb[index]));
}


int main(void){
	cin >> n;
	rep(i,n){
		cin >> memb[i];
	}
	fill_n(*memo, 101*31, -1);
	cout << func(1, memb[0]) << endl;

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
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

void convert(map<char, int> used){
	int sum = 0;
	string MCXI = "mcxi";
	int value[4] = {1000, 100, 10, 1};
	for(int i = 0; i < MCXI.size(); i++){
		sum += value[i]*used[MCXI[i]];
	}
	map<char, int> conv;
	for(int i = 0; i < MCXI.size(); i++){
		conv[MCXI[i]] += (sum / value[i]);
		sum %= value[i];
	}
	for(int i = 0; i < MCXI.size(); i++){
		if(!conv[MCXI[i]])continue;
		else if(conv[MCXI[i]] != 1)cout << conv[MCXI[i]];
		cout << MCXI[i];
	}
	cout << endl;
}

int main(void){
	int n;

	cin >> n;

	rep(l, n){
		map<char, int> used;
		int res = 0;
		for(int i = 0; i < 2; i++){
			string S;
			cin >> S;
			for(int j = 0; j < S.size(); j++){
				if(S[j] >= '0' && S[j] <= '9')continue;
				if(j == 0){used[S[j]]++;continue;}
				char c = S[j-1];
				if(!(c >= '0' && c <= '9')){used[S[j]]++;continue;}
				used[S[j]] += c-'0';
			}
		}
		convert(used);
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
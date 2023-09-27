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

string s[] = {"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int main(void){
	int n;
	cin >> n;
	rep(k,n){
		string L;
		cin >> L;
		int count = 0;
		for(int i = 0; i < L.size(); i++){
			if(L[i] == '0'){
				if(count == 0)continue;
				int type = L[i-1]-'0';
				if(L[i-1] != '0')cout << s[type][(count-1)%s[type].size()];
				count = 0;
				continue;
			}
			count++;
		}
		cout << endl;
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
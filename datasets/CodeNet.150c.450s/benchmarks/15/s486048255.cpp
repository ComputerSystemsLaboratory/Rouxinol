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
#include <stack>
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
vector<string> split(const string &s, char c);
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, q, cnt = 0;
void search(int num, int memo[10001]){
	rep(i,n){
		if(memo[i]==num){
			cnt++;
			break;
		}
	}
}

int main(void){
	int memo[10001];
	fill_n(memo, 10001, 0);
	cin >> n;
	rep(i,n)cin >> memo[i];
	cin >> q;
	rep(i,q){
		int a;
		cin >> a;
		search(a,memo);
	}
	cout << cnt << endl;
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

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    string item;
    for (int i = 0; i < s.size(); i++) {
    	char ch = s[i];
        if (ch == delim) {
            if (!item.empty())
                elems.push_back(item);
            item.clear();
        }
        else {
            item += ch;
        }
    }
    if (!item.empty())
        elems.push_back(item);
    return elems;
}
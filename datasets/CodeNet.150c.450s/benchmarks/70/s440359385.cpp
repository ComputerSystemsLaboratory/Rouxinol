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
		int month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int n, m;
		while(cin >> n >> m, n || m){
			int day = 0;
			rep(i, n-1)day += month[i];
			day += m;
			int yo = day % 7;
			if(yo == 1){
				FIN("Thursday");
			}else if(yo == 2){
				FIN("Friday");
			}else if(yo == 3){
				FIN("Saturday");
			}else if(yo == 4){
				FIN("Sunday");
			}else if(yo == 5){
				FIN("Monday");
			}else if(yo == 6){
				FIN("Tuesday");
			}else if(yo == 0){
				FIN("Wednesday");
			}
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
		
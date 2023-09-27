#define _USE_MATH_DEFINES
#define INF 100000000

#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>
#include <cctype>
#include <utility>

using namespace std;

typedef long long ll;
typedef pair <string,string> P;
typedef pair <int,P> PP;

static const double EPS = 1e-8;

int main(){
	string str;
	int L;
	while(cin >> str >> L){
		if(L==0) break;
		map<string,int> freq;
		int idx = 0;
		int i,j,num;
		while(1){
			map<string,int>::iterator it;
			if((it = freq.find(str)) == freq.end()) freq[str] = idx;
			else {
				i = it->second;
				num = stoi(it->first);
				j = idx;
				break;
			}

			while(str.size() < L) str = "0" + str;
			string maxs = str;
			string mins = str;
			sort(maxs.begin(),maxs.end(),greater<char>());
			sort(mins.begin(),mins.end());

			int maxv = stoi(maxs);
			int minv = stoi(mins);

			int v = maxv - minv;
			string next = "";
			while(v > 0){
				next += (v % 10) + '0';
				v /= 10;
			}

			if(next.size()==0) next = "0";
			reverse(next.begin(),next.end());
			str = next;
			idx++;
		}

		printf("%d %d %d\n",i,num,j-i);
	}
}
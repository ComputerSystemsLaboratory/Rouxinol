#define _USE_MATH_DEFINES
#define INF 10000000
#include <iostream>
#include <sstream>
#include <cmath>
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

using namespace std;

typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P> PP;
typedef pair <int,PP> PPP;

static const double eps = 1e-8;

int main(){
	int n;
	while(~scanf("%d",&n)){
		if(n==0) break;
		map<string,string> conv;
		for(int i=0;i<n;i++){
			string from,to;
			cin >> from >> to;
			conv[from] = to;
		}
		int m;
		scanf("%d",&m);
		string res;
		for(int i=0;i<m;i++){
			string tmp;
			cin >> tmp;
			if(conv.find(tmp) != conv.end()){
				res.append(conv[tmp]);
			}
			else res.append(tmp);
		}

		cout << res << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long ll;
typedef pair<int, int> ii;

#define MAXI 1000000

struct NODE{
	int h, w;
	NODE(){h = w = 0;}
	NODE(int h, int w): h(h), w(w){}
	
	bool operator<(const NODE r){
		if(h * h + w * w != r.h * r.h + r.w * r.w) return h * h + w * w < r.h * r.h + r.w * r.w;
		return h < r.h;
	}
	
};

int main() {

	vector<NODE> vec;
	REP(i, 1, 151){
		REP(j, i+1, 151){
			vec.push_back(NODE(i, j));
		}
	}
	
	SORT(vec);
	
	
	int h, w;
	while(cin >> h >> w, h, w){
		int num = 0;
		while(vec[num].h != h || vec[num].w != w) num++;
		cout << vec[num+1].h << " " << vec[num+1].w << endl;
	}
	
	

	return 0;
}
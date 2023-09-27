#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

struct TimeStamp {
	int h, m, s;
	bool operator<(const TimeStamp &ts) const {
		if(h < ts.h){ return true; }
		if(h > ts.h){ return false; }
		if(m < ts.m){ return true; }
		if(m > ts.m){ return false; }
		return s < ts.s;
	}
};

typedef pair<TimeStamp, TimeStamp> ptt;
typedef pair<TimeStamp, int> pti;

int main(){
	while(true){
		int n;
		cin >> n;
		if(n == 0){ break; }
		vector<ptt> t(n);
		priority_queue< pti, vector<pti>, greater<pti> > pq;
		for(int i = 0; i < n; ++i){
			cin >> t[i].first.h; cin.ignore();
			cin >> t[i].first.m; cin.ignore();
			cin >> t[i].first.s;
			cin >> t[i].second.h; cin.ignore();
			cin >> t[i].second.m; cin.ignore();
			cin >> t[i].second.s;
			pq.push(pti(t[i].first, i));
		}
		int pool = 0, answer = 0;
		while(!pq.empty()){
			pti p = pq.top();
			pq.pop();
			if(p.second < 0){
				++pool;
			}else{
				pq.push(pti(t[p.second].second, -1));
				if(pool == 0){
					++answer;
				}else{
					--pool;
				}
			}
		}
		cout << answer << endl;
	}
	return 0;
}
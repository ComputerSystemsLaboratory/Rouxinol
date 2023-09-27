#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

typedef pair<int, int> P;

int main() {
	int n;
	char d;
	while(cin>>n) {
		if(n == 0){
			break;
		}
		vector<P> t(n);
		int h[2],m[2],s[2];
		for(int i= 0;i < n;i++){
			cin >> h[0]>> d >> m[0] >> d >> s[0] >> h[1] >> d >>m[1]>> d >>s[1];
			t[i].first= h[0]*3600+m[0]*60+s[0];
			t[i].second= h[1]*3600+m[1]*60+s[1];
		}
		for (int i =n-1; i> 0; i--) {
			for (int j =0; j < i; j++){
				if (t[j].first > t[j+1].first) {
					swap(t[j], t[j+1]);
				} else if (t[j].first == t[j+1].first){
					if (t[j].second > t[j+1].second) {
						swap(t[j], t[j+1]);
					}
				}
			}
		}
		queue<P> t1;
		priority_queue<int, vector<int>, greater<int> > t2;
		for (int i=0; i< n; i++) {
			t1.push(t[i]);
		}
		int train =0;
		P p = t1.front();
		t1.pop();
		t2.push(p.second);
		train++;
		for (int i= 1; i < n; i++){
			p = t1.front();
			t1.pop();
			if (!t2.empty() && t2.top() <= p.first) {
				t2.pop();
			} else {
				train++;
			}
			t2.push(p.second);
		}
		cout<<train << endl;
	}
	return 0;
}
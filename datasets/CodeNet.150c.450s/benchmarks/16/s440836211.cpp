/*
 * ALDS1_3_D.cpp
 *
 *  Created on: Apr 26, 2018
 *      Author: 13743
 */

#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<int> s1;
	stack<pair<int, int> > s2;
	int sumR = 0;

	char c;
	for(int i=0; cin >> c; i++) {
		if(c == '\\') {
			s1.push(i);
		}
		else if(c == '/' && !s1.empty()){
			int l = s1.top(); s1.pop();
			int df = i - l;
			sumR += df;
			while(!s2.empty() && s2.top().first > l) {
				df += s2.top().second;
				s2.pop();
			}
			s2.push(make_pair(l, df));
		}
	}
	cout << sumR << endl;
	stack<int> ans;
	while(!s2.empty()) {
		ans.push(s2.top().second);
		s2.pop();
	}
	cout << ans.size();
	while(!ans.empty()) {
		cout << " " << ans.top();
		ans.pop();
	}
	cout << endl;
}

//int main() {
//	int slope[20000];
//	int n = 0;
//	int maxH = 0;
//	int nowH = 0;
//	stack<int> tops;
//	stack<int> topInds;
//	bool nextTop = true;
//	char s;
//	while(cin >> s) {
//		if(s == '_') {
//			slope[n] = 0;
//		}
//		else if(s == '/') {
//			slope[n] = 1;
//			nextTop = true;
//			nowH++;
//			while(!tops.empty() && nowH > tops.top() && maxH > tops.top()) {
//				tops.pop();
//				topInds.pop();
//			}
//		}
//		else {
//			slope[n] = -1;
//			if(nextTop) {
//				tops.push(nowH);
//				topInds.push(n);
//				nextTop = false;
//			}
//			maxH = (nowH > maxH) ? nowH : maxH;
//			nowH--;
//		}
//		n++;
//	}
//	if(nextTop) {
//		tops.push(nowH);
//		topInds.push(n);
//	}
//
//	int sumR = 0;
//	int count = 0;
//	int rains[20000];
//	int tpR = tops.top(); tops.pop();
//	int tpRInd = topInds.top(); topInds.pop();
//	while(!tops.empty()) {
//		int tpL = tops.top();
//		int depth = 0;
//		int rain = 0;
//		int slC = 0;
//		if(tpL > tpR) {
//			do {
//				tpRInd--;
//				int sl = -slope[tpRInd];
//				slC += sl*sl;
//				rain += depth;
//				depth -= sl;
//				if(sl == 1) rain--;
//			} while(depth != 0 || slC == 0);
//		}
//		else {
//			int tpLInd = topInds.top();
//			do {
//				int sl = slope[tpLInd];
//				slC += sl*sl;
//				rain += depth;
//				depth -= sl;
//				tpLInd++;
//				if(sl == 1) rain--;
//			} while(depth != 0 || slC == 0);
//		}
//		rain += slC / 2;
//		sumR += rain;
//		rains[count] = rain;
//		count++;
//		tpR = tops.top(); tops.pop();
//		tpRInd = topInds.top(); topInds.pop();
//	}
//
//	cout << sumR << endl;
//	cout << count;
//	for(int i=0; i<count; i++) {
//		cout << " " << rains[count-1-i];
//	}
//	cout << endl;
//}




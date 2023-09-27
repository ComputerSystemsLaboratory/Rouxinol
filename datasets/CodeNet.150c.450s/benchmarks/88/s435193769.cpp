#include "bits/stdc++.h"
#define REP(i, n ,N) for(ll i = (n); i < (N); i++)
#define p(s) cout<<(s)<< endl
#define p2(a, b) cout<<(a) << " " << (b) << endl
using namespace std;
typedef long long ll;

struct rect{
	ll height;
	ll width;
	ll taikaku;
};

bool cmp_height(const rect &A, const rect &B){
	return A.height < B.height;
}

bool cmp_taikaku(const rect &A, const rect &B){
	return A.taikaku < B.taikaku;
}

int main() {
	ll height,width;
	vector<rect> rectangles;
	while(cin >> height >> width && height) {
		rectangles.clear();
		REP(h, 1, 151) {
			REP(w, h+1, 151) {
				if (w > h) rectangles.push_back({h, w, h*h + w*w});
			}
		}
		sort(rectangles.begin(),rectangles.end(), cmp_height);
		stable_sort(rectangles.begin(),rectangles.end(), cmp_taikaku);

		/**
		for (auto r : rectangles) {
			p2(r.width,r.height);
		}
		 **/



		bool flag=false;
		ll ans_h,ans_w;
		for (auto r : rectangles) {
			if(flag){
				ans_h = r.height;
				ans_w = r.width;
				break;
			}
			if(r.height==height && r.width==width) flag=true;
		}
		p2(ans_h, ans_w);


	}
	return 0;
}

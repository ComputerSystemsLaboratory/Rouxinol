#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vint;

vint tovec(int h, int w){
	vint v(3);
	v[0] = h * h + w * w;
	v[1] = h;
	v[2] = w;
	return v;
}

int main(){
	vector<vint> tbl;
	for(int h = 1; h < 150; ++h)
	for(int w = h + 1; w < 150; ++w){
		tbl.push_back(tovec(h, w));
	}
	sort(tbl.begin(), tbl.end());
	
	int h, w;
	while(scanf("%d%d", &h, &w), h){
		const vint &v = *upper_bound(tbl.begin(), tbl.end(), tovec(h, w));
		printf("%d %d\n", v[1], v[2]);
	}
}
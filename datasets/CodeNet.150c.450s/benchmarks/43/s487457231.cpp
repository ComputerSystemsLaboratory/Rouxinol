#include <cstdio>
#include <vector>
using namespace std;

int main(){
	int n, aa, bb;
	vector<pair<int, int> > v;
	while(1){
		aa = 0;
		bb = 0;
		scanf("%d", &n);
		if(n == 0){
			break;
		}
		int a, b;
		for(int i = 0; i < n; i++){
			scanf("%d %d", &a, &b);
			if(a > b){
				aa += a + b;
			}else if(b > a){
				bb += a + b;
			}else{
				aa += a;
				bb += b;
			}
		}
		v.push_back(make_pair(aa, bb));
	}
	for(int i = 0; i < v.size(); i++){
		printf("%d", v[i].first);
		printf(" ");
		printf("%d\n", v[i].second);
	}
	return 0;
}
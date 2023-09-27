#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

typedef pair<int, int> P;
vector<P> t;

bool comp(P a,P b){
	if(a.first > b.first) return true;
	else if(a.first == b.first && a.second < b.second) return true;
	return false;
}

int main(){
	int n,h,m,s,ar,check;
	while(scanf("%d",&n),n){
		t.clear();
		ar = check = 0;
		for(int i = 0;i < n;++i){
			for(int j = 0;j < 2;++j){
				scanf("%d:%d:%d",&h,&m,&s);
				t.push_back(make_pair(h * 3600 + m * 60 + s, j));
			}
		}
		sort(t.begin(),t.end(),comp);
		reverse(t.begin(),t.end());
		vector<P>::iterator vit = t.begin();
		for(;vit != t.end();++vit){
			if((*vit).second == 0){
				if(ar == 0) ++check;
				else --ar;
			}
			else ++ar;
		}
		printf("%d\n",check);
	}
}
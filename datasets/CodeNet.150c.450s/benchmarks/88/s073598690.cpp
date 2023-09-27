#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

bool comp(P p1, P p2){
	int h1=p1.first, w1=p1.second, h2=p2.first, w2=p2.second;
	if((h1*h1+w1*w1)!=(h2*h2+w2*w2)){
		return (h1*h1+w1*w1)<(h2*h2+w2*w2);
	}else{
		return h1<h2;
	}
}

int main()
{
	vector<P> v;
	for(int i=1; i<=150; i++){
		for(int j=i+1; j<=150; j++){
			v.push_back(P(i, j));
		}
	}
	sort(v.begin(), v.end(), comp);
	while(1){
		int h, w;
		scanf("%d %d", &h, &w);
		if(h==0 && w==0) return 0;
		P p=*upper_bound(v.begin(), v.end(), P(h, w), comp);

		printf("%d %d\n", p.first, p.second);
	}
}

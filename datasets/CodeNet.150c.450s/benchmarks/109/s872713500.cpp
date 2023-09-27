#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdio>

using namespace std;
#define MP make_pair
typedef pair<int,int> PII;

int main(){
  int N;

  while(cin >> N, N){
	vector<PII> tm(N);
	int range[24*60*60+1];
	fill(range, range+24*60*60+1, 0);
	for(int i=0;i<N;++i){
	  int h1, m1, s1, h2, m2, s2;
	  scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
	  tm[i].first = s1+m1*60+h1*60*60;
	  tm[i].second = s2+m2*60+h2*60*60;
	  range[tm[i].first]++;
	  range[tm[i].second]--;
	}

	int ans = 0, sum = 0;
	for(int i=0;i<24*60*60+1;++i){
	  sum += range[i];
	  ans = max(ans, sum);
	}

	cout << ans << endl;
  }
}
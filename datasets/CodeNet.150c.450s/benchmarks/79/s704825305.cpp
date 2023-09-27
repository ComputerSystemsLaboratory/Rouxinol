#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
using namespace std;

int main(){
	int N,R;
	while(cin>>N>>R,N||R){
		int P,C;
		vector<int> card;
		for(int i=1;i<=N;i++){
			card.push_back(i);
		}
		for(int i=0;i<R;i++){
			cin>>P>>C;
			vector<int>::iterator a,b;
			card.resize(card.size()+C);
			a = card.end()-C-P-C+1; b = card.end()-C-P+1;
			for(int j=0;j<C;j++){
				card[card.size()-(C-j)] = *(a+j);
			}
			card.erase(a,b);
		}
		printf("%d\n",card.back());
	}
	return 0;
}
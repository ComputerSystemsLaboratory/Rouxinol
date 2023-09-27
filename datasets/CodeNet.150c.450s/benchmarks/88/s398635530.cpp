#include <bits/stdc++.h>
using namespace std;

int main(void){
	int H, W;
	while(cin >> H >> W, H+W){
		int D = H*H + W*W;
		priority_queue<tuple<int,int,int>> q;
		for(int h = 1; h < 150; ++h){
			for(int w = h+1; w < 150; ++w){
				q.emplace(-(h*h+w*w), -h, -w);
			}
		}
		while(1){
			tuple<int,int,int> t = q.top();
			if(-get<0>(t) == D && -get<1>(t) > H) break;
			if((-get<0>(t)) > D) break;
			q.pop();
		}
		printf("%d %d\n", -get<1>(q.top()), -get<2>(q.top()));
	}
	return 0;
}

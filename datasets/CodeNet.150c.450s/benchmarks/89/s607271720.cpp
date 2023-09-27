#include <bits/stdc++.h>
using namespace std;
#define N 1000050

int p[N] = {};
void init(){
	for(int i = 0; i < N; ++i){
		p[i] = 1;
	}
	p[0] = p[1] = 0;
	for(int i = 2; i < sqrt(N); ++i){
		if(!p[i]) continue;
		for(int j = 2; i*j < N; ++j){
			p[i*j] = 0;
		}
	}
}


int main(void){
	int a,d,n;
	init();
	while(true){
		cin >> a >> d >> n;
		if(!a&&!d&&!n) break;
		int cnt = 0;
		int i = 0;
		while(true){
			if(p[a+d*i])cnt++;
			if(cnt==n)break;
			i++;
		}
		cout << a+d*i << endl;
	}
	return 0;
}

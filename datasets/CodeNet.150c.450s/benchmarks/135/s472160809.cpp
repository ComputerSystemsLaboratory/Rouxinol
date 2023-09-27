#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>

using namespace std;
int N,M;
int tate[1600000];
int yoko[1600000];
int tate2[1600000];
int yoko2[1600000];
int ans;
int tata;
int yoyo;
int main(){
	while(1){
	cin >> N >> M;
	if(N==0&&M==0) return 0;
	for(int i=0;i<1600000;i++){
		tate[i]=0;
		yoko[i]=0;
		tate2[i]=0;
		yoko2[i]=0;
	}
	ans = 0;
	tata = 0;
	yoyo = 0;
	for(int i=0;i<N;i++){
		cin >> tate[i];
	}
	for(int i=0;i<M;i++){
		cin >> yoko[i];
	}
	for(int i=0;i<N;i++){
		tata = 0;
		for(int j=0;j<N-i;j++){
			tata += tate[i+j];
			tate2[tata] ++;
		}
	}
	for(int i=0;i<M;i++){
		yoyo = 0;
		for(int j=0;j<M-i;j++){
			yoyo += yoko[i+j];
			yoko2[yoyo] ++;
		}
	}
	for(int i=0;i<1600000;i++){
		if(tate2[i]*yoko2[i] !=0){
		}
		ans += tate2[i]*yoko2[i];
	}
	cout << ans << endl;
	}
}
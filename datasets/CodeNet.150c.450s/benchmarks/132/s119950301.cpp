#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		int n, p;
		scanf(" %d %d", &n, &p);
		if(n==0) break;
		
		int cand[50]; //candidate
		for(int i=0; i<n; ++i) cand[i]=0;
		
		int now=0;
		int stone=p;
		//ゲームシミュレーション
		while(1){
			//printf("situ: p=%d, now=%d, has %d\n", p, now, cand[now]);
			
			if(p==0){
				p=cand[now];
				cand[now]=0;		
			}
			else{ //石を１個取り次の人へ
				p--;
				cand[now]++;
				if(cand[now]==stone) break; //すべての石が１人のところにある
			}
			
			now=(now+1)%n;		
		}
		
		printf("%d\n", now);
	}
	return 0;
}
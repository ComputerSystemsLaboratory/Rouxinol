#include <stdio.h>

int ball[10];

bool can(int n,int left,int right){
	bool flag;
	
	if(n==10) return true;
	if(ball[n]>right && can(n+1,left ,ball[n])) return true;
	if(ball[n]>left  && can(n+1,ball[n],right)) return true;
	
	return false;
}


int main(){
	
	int N;
	
	scanf("%d",&N);
	
	for(int i=0;i<N;i++){
		for(int j=0;j<10;j++){
			scanf("%d",&ball[j]);
		}
		
		printf(can(0,0,0)?"YES\n":"NO\n");
		
		
	}
}
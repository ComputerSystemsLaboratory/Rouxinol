#include <cstdio>
using namespace std;

int main(){
	int B, C;
	int N;
	int ball[10];
	bool bo;
	
	scanf("%d", &N);
	while(N--){
		for(int i = 0; i < 10; i++) scanf("%d", &ball[i]);
		
		B = 0; C = 0;
		
		bo = true;
		for(int i = 0; i < 10; i++){
			if(ball[i] > B) B = ball[i];
			else if(ball[i] > C) C = ball[i];
			else{
				bo = false;
				break;
			}
		}
		
		if(bo) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
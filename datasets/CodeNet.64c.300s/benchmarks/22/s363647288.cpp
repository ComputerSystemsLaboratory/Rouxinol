#include <cstdio>
using namespace std;

int main(){
	int N;
	int a, b, c;
	int s;
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d%d%d", &a, &b, &c);
		a = a * a; b = b * b; c = c * c;
		
		if(a < b){
			s = a; a = b; b = s;
		}
		if(a < c){
			s = a; a = c; c = s;
		}
		
		if(a == b + c) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
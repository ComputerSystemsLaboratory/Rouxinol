#include <cstdio>

int n;
int s[31];

int main(){
	s[0] = 1;
	for(int i = 0; i < 31; i++){
		for(int j = 1; j <= 3; j++){
			if(i-j < 0) break;
			s[i] += s[i-j];
		}
	}
	while(scanf("%d", &n),n){
		if(s[n]%3650==0) printf("%d\n", s[n]/3650);
		else printf("%d\n", s[n]/3650+1);
	}
}
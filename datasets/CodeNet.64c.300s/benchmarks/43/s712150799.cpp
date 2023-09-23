#include <cstdio>

int main(){
	int s[2];
	s[0] = 0;
	s[1] = 0;
	int a;
	for(int i = 0;i<8;i++){
		scanf("%d",&a);
		s[i / 4] += a;
	}
	printf("%d\n", s[0] > s[1] ? s[0] : s[1]);
}
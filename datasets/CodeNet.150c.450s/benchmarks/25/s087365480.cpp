#include<cstdio>

int main(){
	int count[123];
	for(int i = 0; i < 123; i++){
		count[i] = 0;
	}

	char c;
	while(scanf("%c", &c) != EOF){
		if(c > 96){
			count[c] += 1;
		}else{
			count[c + 32] += 1;
		}
	}

	for(int i = 97; i < 123; i++){
		printf("%c : %d\n", i, count[i]);
	}
	return 0;
}
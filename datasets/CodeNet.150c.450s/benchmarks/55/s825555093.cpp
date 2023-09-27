#include<cstdio>
#include<cstring>

int main(){
	char number[1000];
	while(1){
		scanf("%s", number);
		if(number[0] == '0') break;
		int sum = 0;
		for(int i = 0; i < strlen(number); i++){
			sum += (number[i]-'0');
		}
		printf("%d\n", sum);
	}

	return 0;
}
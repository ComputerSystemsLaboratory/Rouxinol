#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	while(true){
		int sum = 0;
		char number[1001];
		scanf("%s", number);
		if(strcmp(number, "0") == 0) break;

		int i = 0;
		while(number[i]){
			sum += number[i] - '0';
			i++;
		}
		printf("%d\n", sum);
	}

	return 0;
}
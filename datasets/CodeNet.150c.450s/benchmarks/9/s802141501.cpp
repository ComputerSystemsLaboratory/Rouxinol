#include <stdio.h>

using namespace std;

int main(){
	char str[20001];
	int m,tmp,length;
	while(true){
		scanf("%s",str);
		if(str[0] == '-') break;
		length = 0;
		for(int k = 0; str[k] != '\0';k++) length++;
		scanf("%d",&m);
		int index = 0;
		for(int i = 0; i < m; i++){
			scanf("%d",&tmp);
			for(int j = 0; j < tmp; j++){
				str[index+length] = str[index];
				index++;
			}
		}
		for(int p = 0; p < length; p++){
			printf("%c",str[index+p]);
		}
		printf("\n");
	}
}
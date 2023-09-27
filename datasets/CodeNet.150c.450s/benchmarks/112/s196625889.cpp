#include <stdio.h>
#include <string.h>
#define loop(num)	for(int a = 0; a < num; a++)

char List[1234];
char After[1234];

int main(){
	int List_Num;
	int Ans_Num;
	char buf;
	while (1){
		memset(List, '\0', sizeof(List));
		memset(After, '\0', sizeof(After));
		scanf("%d", &List_Num);
		if (List_Num == 0) return 0;
		loop(List_Num){
			scanf(" %c %c", &List[a], &After[a]);
		}
		scanf("%d", &Ans_Num);
		loop(Ans_Num){
			scanf(" %c", &buf);
			for (int b = 0; b < List_Num; b++){
				if (buf == List[b]){
					buf = After[b];
					break;
				}
			}
			printf("%c", buf);
		}
		puts("");
	}
}
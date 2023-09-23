#include <stdio.h>

int main(){
	int data_sets[10000], data_sets2[10000], data_sets3[10000];
	int i = 0, j = 0;
	for(i=0;;i++){
		scanf("%d %d %d", &data_sets[i], &data_sets2[i], &data_sets3[i]);
		if(data_sets[i]==-1&&data_sets2[i]==-1&&data_sets3[i]==-1) break;
	}
	for(j=0;j<i;j++){
		if(data_sets[j]==-1 || data_sets2[j]==-1){
			printf("F\n");
		}else{
			int temp_add = data_sets[j] + data_sets2[j];
			if(temp_add >= 80){printf("A\n");}
			else if(temp_add >= 65){printf("B\n");}
			else if(temp_add >= 50){printf("C\n");}
			else if(temp_add >= 30){if(data_sets3[j]>=50){printf("C\n");}else{printf("D\n");}}
			else{printf("F\n");}
		}
	}
	return 0;
}
#include<cstdio>
#include<cstring>
int main(){
	char str_i[20],str_o[20];
	scanf("%s",str_i);
	int l = strlen(str_i);
	//printf("%d\n",l);
	for(int i=0;i<l;i++){
		str_o[i] = str_i[l-1-i];
		printf("%c",str_o[i]);
	}
	printf("\n");
	return 0;
}
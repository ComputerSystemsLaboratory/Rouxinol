#include<cstdio>
#include<cstring>
int change (char);
int main(void){

int i,j,k=-1;
char n[1024][2000];
int m[1024];
char str[]="0\n";
do{
	k++;
	fgets(n[k],sizeof(n[k]),stdin);
	for(i=0;n[k][i]!='\n';i++);
	m[k]=i;
}while(strcmp(n[k],str)!=0);

for(i=0;i<k;i++){
	int c=0;

	for(j=0;j<m[i];j++){
		
		c=c+change(n[i][j]);
	};
	printf("%d\n",c);
};	
return 0;
}
int change(char suuji){
int suuti;
suuti=suuji-'0';
return suuti;
}
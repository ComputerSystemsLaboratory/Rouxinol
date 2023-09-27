#include<stdio.h>
#include<string.h>

char in[13];
int hash[10000000];
int n;

void insert(void);
void find(void);
int gethash(void);
int Getchar(char);


int main(){

	char ins[7];

	scanf("%d",&n);

	while(n--){
		scanf("%s%s",ins,in);
		if(ins[0]=='i'){
			insert();
		}else{
			find();
		}
	}

	return 0;
}

void insert(){
	hash[gethash()] = 1;
}


void find(){
	if(hash[gethash()]==1)
		printf("yes\n");
	else
		printf("no\n");
}

int gethash(void){
	int hash=0,i,p=1;
	for(i=0;i<strlen(in);i++){
		hash += p*(Getchar(in[i]));
		p *= 4;
	}
	return hash;
}

int Getchar(char in){

	if(in=='A')return 1;
	else if(in=='C')return 2;
	else if(in=='G')return 3;
	else return 4;

}
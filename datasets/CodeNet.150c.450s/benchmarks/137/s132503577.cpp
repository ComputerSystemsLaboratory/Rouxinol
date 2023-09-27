#include<cstdio>
#include<cstring>
using namespace std;
#define M 1000000//??????????????°
#define L 12	  //??????????????????

char H[M][L];

//??????????????°???
int getChar(char ch){
	if(ch=='A') return 1;
	else if(ch=='C') return 2;
	else if(ch=='G') return 3;
	else if(ch=='T') return 4;
	else return 0;
}

int getKey(char str[]){
	int sum = 0, p=1, i;
	for(i=0;i<strlen(str);i++){
		sum += p*( getChar(str[i]) );
		p *= 5;
	}
	return sum;
}

int h1(int key){ return key % M; }
int h2(int key){ return 1 + (key % (M-1)); }
int hashfunc(int key,int i){ return ( h1(key) + i*h2(key) ) % M; }

int find(char str[]){
	int key,i,h;
	key = getKey(str);
	for( i=0 ; ; i++ ){
		h = hashfunc(key,i);
		if(strcmp(H[h],str) == 0) return 1;
		else if( strlen(H[h]) == 0 ) return 0;//??°?????£???????????¨???????????¨?????\??£???????????¨???????????¨???
	}
	return 0;
} 

void insert(char str[]){
	int key,i,h;
	key = getKey(str);
	for( i=0 ; ; i++ ){
		h = hashfunc(key,i);
		if(strcmp(H[h],str) == 0) return;
		else if(strlen(H[h]) == 0){
			strcpy(H[h],str);
			return;
		}
	}
	return;
}

int main(){
	int i,n,h;
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		char command[6];
		char str[12];
		scanf("%s%s",command,str);
		if(command[0] == 'i'){
			insert(str);
		}else{
			if(find(str)){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}
	}
	return 0;
}
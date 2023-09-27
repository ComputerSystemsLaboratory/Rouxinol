#include <cstdio>
#include <cstring>
#define M 5070721
#define NIL (-1)
#define L 14
typedef long long ll;
char H[M][L];

int getChar(char ch){
	if(ch=='A')return 1;
	else if(ch=='C')return 2;
	else if(ch=='G')return 3;
	else if(ch=='T')return 4;
	else return 0;
}

ll getKey(char str[]){
	ll sum=0,p=1,i;
	int len=strlen(str);
	for(i=0;i<len;i++){
		sum+=p*(getChar(str[i]));
		p*=5;
	}
	return sum;
}

int h1(int key){
	return key%M;
}

int h2(int key){
	return 1+(key%(M-1));
}

int find(char str[]){
	ll key,i,h;
	key=getKey(str);
	for(i=0;;i++){
		h=(h1(key)+i*h2(key))%M;
		if(strcmp(H[h],str)==0)return 1;
		else if(strlen(H[h])==0)return 0;
	}
	return 0;
}

int insert(char str[]){
	ll key,i,h;
	key=getKey(str);
	for(i=0;;i++){
		h=(h1(key)+i*h2(key))%M;
		if(strcmp(H[h],str)==0)return 1;
		else if(strlen(H[h])==0){
			strcpy(H[h],str);
			return 0;
		}
	}
	return 0;
}


int main(void){
	int n;
	char str[L],com[9];
	for(int i=0;i<M;i++){
		H[i][0]='\0';
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %s",com,str);
		if(com[0]=='i'){
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
#include<stdio.h>
#include<string.h>

#define M 1046527
#define NIL (-1)
#define L 14
char H[M][L];

int getChar(char c){
	if(c == 'A') return 1;
	if(c == 'C') return 2;
	if(c == 'G') return 3;
	if(c == 'T') return 4;
	return 0;
}
long long getKey(char s[]){
	long long sum = 0,p = 1;
	int i , l=strlen(s);
	for(i = 0;i < l;i++){
		sum+=p*getChar(s[i]);
		p*=5;
	}
	return sum;
}

long long h1(long long key){ return key % M; }
long long h2(long long key){ return 1 + (key % (M - 1)); }

int insert(char s[]){
	long long key, i, h;
	key = getKey(s);
	for(i=0;;i++){
		h = (h1(key) + i*h2(key)) % M;
		if(strcmp(H[h],s) == 0 ) return 1;
		else if( strlen(H[h]) == 0 ){
			strcpy(H[h], s);
			return 0;
		}
	}
	return 0;
}

int find(char s[]){
	long long key, i, h;
	key = getKey(s);
	for(i = 0;;i++){
		h = (h1(key) + i * h2(key)) % M;
		if( strcmp(H[h],s) == 0) return 1;
		else if(strlen(H[h]) == 0) return 0;
	}
	return 0;
}

int main(){
	int i,n,j,k;
	char s[L],c[9];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s", c, s);
		if(c[0] == 'i') insert(s);
		else{
			if(find(s)) printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
} 

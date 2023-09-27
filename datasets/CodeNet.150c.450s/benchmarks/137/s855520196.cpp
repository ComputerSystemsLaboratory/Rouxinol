#include <cstdio>
#include <cstdlib>
#include <cstring>
#define N 1046527

using namespace std;
char hs[N][14];

int dd(char d){
	switch(d){
		case 'A':
		return 1;

		case 'C':
		return 2;
		
		case 'T':
		return 3;
		
		case 'G':
		return 4;
	}
	return 0;
}

int ids(char *c){
	int id = 0;
	int pos = 0, p =1;
	while(1){

		if(c[pos] == '\0') break;
		id += p*dd(c[pos]);
		pos++;
		p *= 5;
	}
	return id;
}

int h1(int key){
	return key%N;
}
int h2(int key){
	return 1+key%(N-1);
}
int h(int key, int i){
	return (h1(key)+i*h2(key))%N;
}

void insert(char *c){
	int i=0;
	int key = ids(c);
	while(true){
		int j = h(key, i);
		if(hs[j][0] == '?'){
			strcpy(hs[j], c);
			return;
		}
		i = i+1;
	}
}

bool search(char* c){
	int i=0;
	int key = ids(c);
	while(true){
		int j = h(key, i);
		if( strcmp(hs[j], c) == 0 ){
			return true;
		} else if( hs[j][0]=='?' || i>=N){
			return false;
		}
		i = i+1;
	}
}


int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<N;i++) hs[i][0] = '?';
	char in[9];
	char inn[14];
	for(int i=0;i<n;i++){
		scanf(" %s %s", in, inn);
		if(in[0] == 'i'){
			insert(inn);
		} else {
			if(search(inn)){
				printf("yes\n");
			} else {
				printf("no\n");
			}
		}
	}
	return 0;
}
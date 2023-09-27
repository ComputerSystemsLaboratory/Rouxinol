#include<bits/stdc++.h>
using namespace std;

#define M 1000000
#define L 13

char Hash[M][L];

int h1(int key){
	return key % M; 
}

int h2(int key){
	return 1 + (key % (M-1)); 
}

int getChar(char str){
	if(str == 'A') return 1;
	else if(str == 'C') return 2;
	else if(str == 'G') return 3;
	else if(str == 'T') return 4;
}

int getKey(char str[]){
	int sum = 0, p = 1;
	for(int i = 0 ; i < strlen(str) ; i++){
		sum += p * (getChar(str[i]));
		p *= 5;
	}
	
	return sum;
}

int insert(char str[]){
	int key, h;
	int x, y;
	key = getKey(str);
	x = h1(key);
	y = h2(key);
	for(int i = 0 ; i < M ; i++){
		h = (x + i * y) % M;
		if(strcmp(Hash[h], str) == 0) return 1;
		else if(strlen(Hash[h]) == 0){
			strcpy(Hash[h], str);
			return 0;
		}
	}
	
	return 0;
}

int find(char str[]){
	int key, h;
	int x, y;
	
	key = getKey(str);
	
	x = h1(key);
	y = h2(key);
	
	for(int i = 0 ; i < M ; i++){
		h = (x + i * y) % M;
		if(strcmp(Hash[h], str) == 0) return 1;
		else if(strlen(Hash[h]) == 0) return 0;;
	}
	
	return 0;
}

int main(){
	int n, h;
	char str[L], status[7];
	
	for(int i = 0 ; i < M ; i++){
		Hash[i][0] = '\0';
	}
	
	scanf("%d", &n);
	
	for(int i = 0 ; i < n ; i++){
		scanf("%s %s", status, str);
		
		if(status[0] == 'i'){
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
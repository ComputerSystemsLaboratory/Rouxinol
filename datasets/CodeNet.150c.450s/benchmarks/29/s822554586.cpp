#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

#define is_uruu leapyear
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define ROF(i,a,b) for(int i=(a);i>(b);--i)
	
int list[2000003], head=1000001, tail=1000001;


void insert(int x){
	head--;
	list[head] = x;
}


void deleteU(int x){
	FOR(i, head, tail){
		if(list[i] == x) {
			list[i]=-1;
			break;
		}
	}
}


void deleteFirst(){
	head++;
	while(list[head-1] == -1)head++;
}


void deleteLast(){
	tail--;
	while(list[tail] == -1)tail--;
}

	
int main() {
	int n, tmp;
	char c[12];
	scanf("%d", &n);
	FOR(i, 0, n){
			scanf("%s", c);
		
		
		if(!strcmp(c, "insert")){
			scanf("%d", &tmp);
			insert(tmp);
		} 
		else if(!strcmp(c, "delete")){
			scanf("%d", &tmp);
			deleteU(tmp);
		}
		else if(!strcmp(c, "deleteFirst")){
			deleteFirst();
		}
		else if(!strcmp(c, "deleteLast")){
			deleteLast();
		}
	}
		
	int j=head;
	for(; j<tail; j++){
		if(list[j] != -1){
			printf("%d", list[j]);
			j++;
			break;
		}
	}
	FOR(k, j, tail){
		if(list[k] != -1)printf(" %d", list[k]);
	}
	printf("\n");
		
    return 0;
}

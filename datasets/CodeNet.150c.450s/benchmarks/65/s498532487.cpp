#include <cstdio>
#include <iostream>
#include <utility>
using namespace std;

typedef struct{
	char c;
	int v;
}cards;

int main(){
	int n;
	cards x[36], y[36], z[36];
	int count=0;
	
	scanf(" %d", &n);
	for(int i=0; i<n; ++i){
		scanf(" %c %d", &x[i].c, &x[i].v);
		y[i]=x[i];
		z[i]=x[i];
	}
	
	//bubble sort	
	bool flag=true;
	while(flag){
		flag=false;
		for(int i=n-1; i>0; --i){
			if(y[i].v<y[i-1].v){
				swap(y[i], y[i-1]);
				flag=true;
			}	
		}
	}
	
	//selection sort	
	for(int i=0; i<n; ++i){
		int minj=i;
		for(int j=i; j<n; ++j){
			if(z[j].v<z[minj].v) minj=j;		
		}	
		
		if(i!=minj) swap(z[i], z[minj]);
	}

	
	for(int i=0; i<n; ++i){
		if(i>0) printf(" ");
		printf("%c%d", y[i].c, y[i].v);
	}
	printf("\n");
	
	printf("Stable\n");
	
	for(int i=0; i<n; ++i){
		if(i>0) printf(" ");
		printf("%c%d", z[i].c, z[i].v);
	}
		printf("\n");
	
	bool f2=true;
	for(int i=0; i<n; ++i) if(y[i].c!= z[i].c) f2=false;
	
	if(f2) printf("Stable\n");
	else printf("Not stable\n");
}
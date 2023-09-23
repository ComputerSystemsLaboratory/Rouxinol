#include<cstdio>

int main(){
	bool sub[30];

	for(int i=0;i<30;i++)sub[i] = false;

	for(int i=0;i<28;i++){
		int tmp;
		scanf("%d",&tmp);
		sub[tmp-1] = true;
	}

	for(int i=0;i<30;i++){
		if(!sub[i])printf("%d\n",i+1);
	}

	return 0;
}
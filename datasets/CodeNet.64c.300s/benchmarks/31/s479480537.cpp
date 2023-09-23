#include <cstdio>

int main(){
	bool f[30];
	for(int i=0;i<30;i++){
		f[i] = false;
	}
	int s;
	for(int i=0;i<28;i++){
		scanf("%d",&s);
		f[s - 1] = true;
	}
	for(int i=0;i<30;i++){
		if(f[i] == false){
			printf("%d\n",i + 1);
		}
	}
}
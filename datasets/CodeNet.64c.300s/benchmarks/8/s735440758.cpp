#include <cstdio>
void call(int n){
	for(int i = 1;++i<=n;){
		int x = i;
		if ( x % 3 == 0 ){
			printf(" %d",i);
		}
		else{
			while(x){
				if ( x % 10 == 3 ){
					printf(" %d",i);
					break;
				}
				x /= 10;
			}
		}
	}
	putchar('\n');
}

int main(){
	int buf;
	scanf("%d",&buf);
	call(buf);
}
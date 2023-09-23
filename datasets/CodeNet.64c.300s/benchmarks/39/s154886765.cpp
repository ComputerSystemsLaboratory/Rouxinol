#include <stdio.h>

using namespace std;


int main(){
	int n,count;
	while(scanf("%d",&n)!=EOF){
		if(n >= 37){
			printf("0\n");
		}else{
			count = 0;

			for(int a=0;a<=9;a++){
				for(int b=0;b<=9;b++){
					for(int c=0;c<=9;c++){
						for(int d=0;d<=9;d++){
							if(a+b+c+d==n)count++;
						}
					}
				}
			}
			printf("%d\n",count);
		}
	}

    return 0;
}
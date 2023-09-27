#include<stdio.h>
#include<algorithm>
using namespace std;
int d[11];
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		int c=a+b;
		int ret=0;
		while(c){
			ret++;
			c/=10;
		}
		printf("%d\n",ret);
	}
}
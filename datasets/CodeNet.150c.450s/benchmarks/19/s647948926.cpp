#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0) break;
		if(a<b)	printf("%d %d\n",a,b);
		else printf("%d %d\n",b,a);
	}
	return 0;
}

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,i=1;
	while(scanf("%d",&a)!=EOF){
		if(a==0) break;
		printf("Case %d: %d\n",i,a);
		i++;
	}
	return 0;
}

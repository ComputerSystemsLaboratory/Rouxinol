#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		a=a+b;
		int index=0;
		while(a>0&&(a=a/10)>0)
			index++;
		printf("%d\n",index+1);
	}
	return 0;
}

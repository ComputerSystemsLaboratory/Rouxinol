#include <cstdio>
bool B[30];
int main (int argc, char const* argv[])
{
	int n;
	for(int i=0;i<28;i++) {
		scanf("%d",&n);
		B[n-1]=true;
	}
	for(int i=0;i<30;i++) {
		if(!B[i])printf("%d\n",i+1);
	}
	return 0;
}
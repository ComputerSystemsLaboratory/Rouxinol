#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int A[10];
		for(int j=0;j<10;j++)scanf("%d",&A[j]);
		int X=A[0],Y=-1;
		bool f=true;
		for(int j=1;j<10;j++){
			if(X>A[j]&&Y>A[j]){
				f=false;
				break;
			}
			if(X>A[j])Y=A[j];
			else if(Y>A[j])X=A[j];
			else if(X>Y)X=A[j];
			else Y=A[j];
		}
		if(f)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
#include<cstdio>

using namespace std;



int main(void){

	int S=0,T=0,s;

	for(int i=0;i<4;i++){
		scanf("%d",&s);
		S+=s;
	}
	for(int i=0;i<4;i++){
		scanf("%d",&s);
		T+=s;
	}
	if(S>T) printf("%d\n",S);
	else printf("%d\n",T);

	return 0;
}
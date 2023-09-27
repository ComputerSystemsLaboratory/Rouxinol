#include<cstdio>

using namespace std;



int main(void){

	int n,max=0,num[101]={0};

	while(scanf("%d",&n)!=EOF){
		num[n]++;
		if(num[n]>max) max=num[n];
	}

	for(int i=1;i<=100;i++){
		if(num[i]==max) printf("%d\n",i);
	}
	return 0;
}
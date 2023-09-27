#include<string>
#include<cstdio>
#include<iostream>

using namespace std;
 
int main(){
	int a[101]={0};
	int i, max=0;

	while(scanf("%d",&i)!=EOF)
		if(max<++a[i]) max=a[i];

	for(int j=0; j<101; j++){
		if(max==a[j]) printf("%d\n",j);
	}

    return 0;
}
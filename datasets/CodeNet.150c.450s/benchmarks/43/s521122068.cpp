#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0)
		break;
		int a,b,suma=0,sumb=0;
		for(int i=0;i<n;i++){
			scanf("%d %d",&a,&b);
			if(a>b)
			suma+=a+b;
			else if(b>a)
			sumb+=a+b;
			else{
				suma+=a;
				sumb+=b;
			}
		}
		printf("%d %d\n",suma,sumb);
	}
}
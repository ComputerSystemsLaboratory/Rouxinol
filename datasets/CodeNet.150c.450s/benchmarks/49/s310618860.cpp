#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int N;
int Point[100];
int High=-1;
int Low=1001;
int main()
{
	while(true){
		scanf("%d",&N);
		if(N==0)break;
		High=-1;Low=1001;
		int sum=0;
		for(int i=0;i<N;i++){
			scanf("%d",&Point[i]);
			sum+=Point[i];
			High=max(Point[i],High);
			Low=min(Point[i],Low);
		}
		printf("%d\n",(sum-High-Low)/(N-2));
	}
}
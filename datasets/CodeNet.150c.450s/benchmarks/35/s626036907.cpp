#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n,sumax,temp;
	int num[5001];
	
	while(scanf("%d",&n)){
		if(n==0)
		break;
		for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		sumax = -100000;
		for(int i=0;i<n;i++){
			temp = 0;
			for(int j=i;j<n;j++){
				temp+=num[j];
				if(temp>sumax)
				sumax=temp;
			}
		}
		printf("%d\n",sumax);
	}
}
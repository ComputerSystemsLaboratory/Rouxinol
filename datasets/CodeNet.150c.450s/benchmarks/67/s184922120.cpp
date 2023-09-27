#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
	int n,x;
	while(true){
		scanf("%d",&n);
		x=0;
		if(n==0)
			break;
		for(int i=2;i<=n;i++){
			for(int j=1;j<n;j++){
				int count=0;
				for(int k=j;k<j+i;k++)
					count+=k;
				if(count==n)
					x++;
			}
		}
		printf("%d\n",x);
	}
	return 0;
}
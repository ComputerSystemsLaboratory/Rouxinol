#include <iostream>
#include <stack>
#include <stdio.h>

#define BUF_SIZE 120000

using namespace std;

int main(){

	int n;
	scanf("%d",&n);

	int S[n];

	for(int i = 0; i < n; i++){
		scanf("%d",&S[i]);
	}

	int q;
	scanf("%d",&q);

	int count = 0;
	int tmp;

	for(int i = 0; i < q; i++){
		scanf("%d",&tmp);
		for(int k = 0; k < n; k++){
			if(tmp == S[k]){
				count++;
				break;
			}
		}
	}

	printf("%d\n",count);

}
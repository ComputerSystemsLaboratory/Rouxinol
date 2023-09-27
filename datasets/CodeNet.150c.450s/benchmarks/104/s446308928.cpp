#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

	int w,n,left,right;
	scanf("%d",&w);
	int array[w+1];
	for(int i=0;i<w+1;i++)array[i]=i;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d,%d",&left,&right);
		swap(array[left],array[right]);
	}

	for(int i=1;i<=w;i++){
		printf("%d\n",array[i]);
	}

    return 0;
}
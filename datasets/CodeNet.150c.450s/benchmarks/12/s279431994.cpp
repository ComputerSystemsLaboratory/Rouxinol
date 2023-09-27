#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int h,i;
	scanf("%d",&h);
    int a[h+1];
	for(i=1;i<=h;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=h;i++){
		printf("node %d: key = %d, ",i,a[i]);
		if(i>1) printf("parent key = %d, ",a[i/2]);
		if(2*i<=h) printf("left key = %d, ",a[2*i]);
		if(2*i+1<=h) printf("right key = %d, ",a[2*i+1]);
		cout<<endl;
	}
	return 0;
}

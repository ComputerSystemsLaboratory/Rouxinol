#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
	int a[30];
	int w,n;
	cin >> w >> n;
	for(int i=0;i<w;i++){
		a[i]=i;
	}
	for(int i=0;i<n;i++){
		int x,y,tmp;
		scanf("%d,%d",&x,&y);
		tmp = a[x-1];
		a[x-1] = a[y-1];
		a[y-1] = tmp;
	}
	for(int i=0;i<w;i++) cout << a[i]+1 << "\n";
	return 0;
}
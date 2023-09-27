#include<iostream>
#include<algorithm>
using namespace std;
int a[15];
int main(){
	for(int i=0;i<10;i++)
		scanf("%d",a+i);
	sort(a,a+10);
	printf("%d\n%d\n%d\n",a[9],a[8],a[7]);
	return 0;
}

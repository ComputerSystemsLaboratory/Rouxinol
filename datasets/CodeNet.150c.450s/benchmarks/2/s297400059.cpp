#include <cstdio>
using namespace std;
#define swap(a,b)	if(a!=b){ a^=b;	b^=a;	a^=b; }
int main(){
	int n;	scanf("%d",&n);
	int a[n];	for(int i=0;i<n;i++)	scanf("%d",&a[i]);
	int r=n-1;
	//partition(a,0,r)
	int x=a[r];
	int i=0;
	for(int j=0;j<r;j++){
		if(a[j]<=x){
			swap(a[i],a[j]);
			i++;
		}
	}
	swap(a[i],a[r]);
	
	for(int j=0;j<n;j++){
		if(j)	printf(" ");
		if(j==i)	printf("[%d]",a[j]);
		else 		printf("%d",a[j]);
	}
	printf("\n");
	return 0;
}
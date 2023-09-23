#include <cstdio>
#include <algorithm>
using namespace std;
int n,a[101];

void insertionSort(int* A,int N)
{
	for(int k=0;k<N-1;k++) printf("%d ",A[k]);
	printf("%d\n",A[N-1]);
	for(int i=1;i<N;i++){
		int v=A[i];
		int j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
		for(int k=0;k<N-1;k++) printf("%d ",A[k]);
		printf("%d\n",A[N-1]);
	}
	
	return;
}

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	insertionSort(a,n);
	return 0;
}
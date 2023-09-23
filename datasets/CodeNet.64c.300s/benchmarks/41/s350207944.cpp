#include <bits/stdc++.h>
using namespace std;
int A[500005],n;
void maxH(int i){
	int l=2*i,r=2*i+1,big;
	if(l<=n && A[l]>A[i]) big = l;
	else big = i;
	if(r<=n && A[r]>A[big]) big = r;
	if(big!=i){
		swap(A[i],A[big]);
		maxH(big);
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%d",&A[i]);
	for(int i=n/2;i>0;i--)
		maxH(i);
	for(int i=1;i<=n;i++){
		printf(" %d",A[i]);
	}
	puts("");
	return 0;
}


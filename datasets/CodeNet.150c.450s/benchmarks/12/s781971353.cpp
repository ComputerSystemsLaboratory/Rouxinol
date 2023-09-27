#include <bits/stdc++.h>
using namespace std;
int H[255];
int main()
{
	int n; cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%d",&H[i]);
	for(int i=1;i<=n;i++){
		printf("node %d: key = %d, ",i,H[i]);
		if(i/2) printf("parent key = %d, ",H[i/2]);
		if(i*2<=n) printf("left key = %d, ",H[i*2]);
		if(i*2+1<=n) printf("right key = %d, ",H[i*2+1]);
		puts("");
	}
	return 0;
}


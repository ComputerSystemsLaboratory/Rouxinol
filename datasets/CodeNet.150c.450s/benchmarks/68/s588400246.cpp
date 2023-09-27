#include<bits/stdc++.h>
using namespace std;
#define MAX_N 1111
int main()
{
	while(true){
		int N;
		int A[MAX_N];
		scanf("%d",&N);
		if(N==0){break;}
		for(int i=0;i<N;i++){scanf("%d",&A[i]);}
		sort(A,A+N);
		int ans=1000001;
		for(int i=0;i<N-1;i++){
			ans=min(ans,A[i+1]-A[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}


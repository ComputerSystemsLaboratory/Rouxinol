#include <cstdio>
#define SWAP(a,b) {a+=b,b=a-b,a-=b;}

using namespace std;

int W[30];

int main()
{
	int w,n,ai,bi;
	scanf("%d",&w);
	for(int i=0;i<w;++i) W[i]=i+1;
	scanf("%d",&n);
	for(int i=0;i<n;++i) {
		scanf("%d,%d",&ai,&bi);
		SWAP(W[ai-1],W[bi-1]);
	}
	for(int i=0;i<w;++i) { printf("%d\n",W[i]); }
	return 0;
}
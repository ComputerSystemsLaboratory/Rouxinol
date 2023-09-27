#include <cstdio>
#include <cstdlib>
#define N 10000
#define Q 500

using namespace std;


int main(){
	int *a,*b;
	a = new int[N];
	b = new int[Q];
	int n,q;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf(" %d", &a[i]);
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf(" %d", &b[i]);

	}
	int ans = 0;
	for(int i=0;i<q;i++){
		for(int j=0;j<n;j++){
			if(a[j] == b[i] ){
				ans++;
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
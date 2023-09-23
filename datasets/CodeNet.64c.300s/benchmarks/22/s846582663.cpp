#include <cstdio>
#include <algorithm>

const int MAX_N=1000;

using namespace std;

int a[MAX_N],b[MAX_N],c[MAX_N];

int main(){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for (int i=0;i<n;i++){
		if (a[i]<b[i]){
			swap(a[i],b[i]);
		}
		if (a[i]<c[i]){
			swap(a[i],c[i]);
		}
		if (a[i]*a[i]==b[i]*b[i]+c[i]*c[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int a[105];

int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int cnt=0;
	bool flag=true;
	for(int i=0;i<n-1;i++){
		int mini=i;
		for(int j=i;j<n;j++){
			if(a[j]<a[mini]){
				mini=j;
			}
		}
		if(i!=mini){
			swap(a[i],a[mini]);
			cnt++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d%c",a[i],i==n-1?'\n':' ');
	}
	printf("%d\n",cnt);
	return 0;
}
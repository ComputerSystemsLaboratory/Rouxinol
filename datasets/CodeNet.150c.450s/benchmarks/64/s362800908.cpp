#include <cstdio>
using namespace std;
#define E 2000*n
int main(){
	int n;	scanf("%d",&n);
	int a;
	bool data[E];
	for(int i=1;i<E;i++)	data[i]=false;
	data[0]=true;
	int max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		for(int j=max;j>=0;j--){
			if(data[j])	data[j+a]=true;
		}
		max+=a;
	}
	int q;	scanf("%d",&q);
	int m;
	for(int i=0;i<q;i++){
		scanf("%d",&m);
		printf("%s\n",(data[m]?"yes":"no"));
	}
	return 0;
}
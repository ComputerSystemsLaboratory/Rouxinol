#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n, m, lot[30];
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){lot[i] = i+1;}
	while(m--){
		int a, b;
		scanf("%d,%d",&a,&b);
		swap(lot[a-1],lot[b-1]);
	}
	for(int i=0; i<n; i++){printf("%d\n",lot[i]);}
	return 0;
}
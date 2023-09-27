#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int n;
	vector<int> G;
	scanf("%d",&n);
	if(n == 1){
		printf("%d: %d\n",n,n);
		return 0;
	}
	int a = n;
	for(int i = 2; i * i <= n; i++){
		while(a%i == 0){
			G.push_back(i);
			a /= i;
		}
	}
	if(a != 1)G.push_back(a);
	printf("%d:",n);
	for(int i = 0; i < G.size(); i++){
		printf(" %d",G[i]);
	}
	puts("");
	return 0;
}
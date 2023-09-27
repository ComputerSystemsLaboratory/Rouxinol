#include <cstdio>
#include <vector>

using namespace std;

int n,k;
vector<int> v;

int main(){
	int a;
	int i;
	while(scanf("%d %d",&n,&k) && (n || k) ){
		v.clear();
		for(i=0;i<n;i++){
			scanf("%d",&a);
			v.push_back(a);
		}
		a = 0;
		for(i=0;i<k;i++){
			a+=v[i];
		}
		//printf("%d-%d,%d\n",i-k,i,a);
		int max = a;
		for(;i<n;i++){
			a = a - v[i - k] + v[i];
			//printf("%d-%d,%d\n",i-k,i,a);
			if(max < a){max = a;}
		}
		printf("%d\n",max);
	}
}
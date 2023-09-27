#include <cstdio>
#include <vector>
#include <algorithm>
#define pb push_back
using namespace std;

int Pow(int a){
	int ret = 1;
	for(int i = 0; i < a; i++) ret *= 10;
	return ret;
}

int main(){
	int a, l;
	while(scanf("%d%d", &a, &l),a||l){
		vector<int> num;
		num.pb(a);
		while(true){
			int Min = 0, Max = 0;
			int rank[6];
			bool ok = false;
			for(int i = 0; i < l; i++){
				rank[i] = (a%Pow(i+1))/Pow(i);
				//printf("%d ", rank[i]);
			}
			//printf("\n");
			sort(rank,rank+l);
			for(int i = 0; i < l; i++){
				Min += Pow(i)*rank[l-1-i];
				Max += Pow(i)*rank[i];
			}
			a = Max - Min;
			//printf("%d %d %d\n", Min, Max, a);
			for(int i = 0; i < num.size(); i++){
				if(a == num[i]){
					printf("%d %d %d\n", i, a, num.size()-i);
					ok = true;
					break;
				}
			}
			if(ok) break;
			num.pb(a);
		}
	}
}
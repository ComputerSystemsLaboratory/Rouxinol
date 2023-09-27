#include <cstdio>
#include <vector>
using namespace std;

int n;
int a[10];
vector<int> l, r;
vector<int> emp;

bool dfs(int p){
//	printf("p=%d\n", p);
	/*
	printf("l ");
	for(int i=0; i<l.size(); i++){
		printf("%d ", l[i]);
	}
	printf("\nr ");
	for(int i=0; i<r.size(); i++){
		printf("%d ", r[i]);
	}
	printf("\n");
*/
	if(p == 10) return true;
	l.push_back(a[p]);
	if(l.size() == 1 || l[l.size() - 2] < l[l.size() - 1]){
		return dfs(p+1);
	}else{
		l.pop_back();
		r.push_back(a[p]);
		if(r.size() == 1 || r[r.size() - 2] < r[r.size() - 1]){
			return dfs(p+1);
		}else{
			r.pop_back();
			return false;
		}
	}
}

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		l = emp;
		r = emp;
		for(int j=0; j<10; j++){
			scanf("%d", &a[j]);
		}
		if(dfs(0)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
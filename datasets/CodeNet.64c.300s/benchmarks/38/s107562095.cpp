using namespace std;

#include <cstdio>

int a[10];

bool dfs(int i, int l, int r){
	if (i == 10){
		return true;
	}
	if (l < a[i] && dfs(i + 1, a[i], r)){
		return true;
	}
	if (r < a[i] && dfs(i + 1, l, a[i])){
		return true;
	}
	return false;
}

int main(){
	int n;
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			scanf("%d", &a[j]);
		}
		printf("%s\n", dfs(0, 0, 0) ? "YES" : "NO");
	}
	return 0;
}
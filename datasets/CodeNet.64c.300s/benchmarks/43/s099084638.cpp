#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int inf, mat, sci, eng;
	int S, T;
	
	scanf("%d%d%d%d", &inf, &mat, &sci, &eng);
	S = inf + mat + sci + eng;
	scanf("%d%d%d%d", &inf, &mat, &sci, &eng);
	T = inf + mat + sci + eng;
	
	printf("%d\n", max(S, T));
	
	return 0;
}
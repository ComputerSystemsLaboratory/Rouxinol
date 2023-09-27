#include <cstdio>
#define MIN(a, b) a < b ? a : b
#define SUPER_LARGE 987654321
int V, E, R, D[1000];
struct edges {
	int s;
	int d;
	int w;
};
struct edges A[2000];
void input(void);
bool DP(void);
int main(void){
	input();
	if (DP())
		printf("NEGATIVE CYCLE\n");
	else{
		int i;
		for (i = 0; i < V; i++){
			if (D[i] > 10000000)
				printf("INF\n");
			else
				printf("%d\n", D[i]);
		}
	}
		
	return 0;
}
bool DP(void){
	int i, j, k;
	for (i = 0; i < V; i++) D[i] = SUPER_LARGE;
	D[R] = 0;
	for (j = 0; j < V; j++)  // for relaxation order
		for (k = 0; k < E; k++) D[A[k].d] = MIN(A[k].w + D[A[k].s], D[A[k].d]); // relaxation 

	bool nc = false;
	for (k = 0; k < E; k++){
		if (D[A[k].d] <= 10000000 && D[A[k].d] > A[k].w + D[A[k].s]) {
			nc = true;
			break;
		}
	}
	return nc;
}
void input(void){
	scanf("%d%d%d", &V, &E, &R);
	int i;
	for (i = 0; i < E; i++) scanf("%d%d%d", &A[i].s, &A[i].d, &A[i].w);
}
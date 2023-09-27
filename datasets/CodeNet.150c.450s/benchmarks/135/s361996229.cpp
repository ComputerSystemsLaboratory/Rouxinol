#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int *heightTable;
int *widthTable;

void func(int N,int M){
	int h_value[N],w_value[M],h_max = 0,w_max = 0;

	for(int loop = 0; loop < N; loop++){
		scanf("%d",&h_value[loop]);
		heightTable[h_value[loop]]++;
		h_max = max(h_max,h_value[loop]);
	}

	for(int loop = 0; loop < M; loop++){
		scanf("%d",&w_value[loop]);
		widthTable[w_value[loop]]++;
		w_max = max(w_max,w_value[loop]);
	}

	int S;

	for(int range = 2; range <= N; range++){

		S = 0;

		for(int right = 0; right < range;right++){
			S += h_value[right];
		}

		h_max = max(h_max,S);
		heightTable[S]++;

		for(int left = 1; left <= N-range; left++){
			S -= h_value[left-1];
			S += h_value[left+range-1];
			heightTable[S]++;
			h_max = max(h_max,S);
		}
	}

	for(int range = 2; range <= M; range++){

		S = 0;

		for(int right = 0; right < range;right++){
			S += w_value[right];
		}

		w_max = max(w_max,S);
		widthTable[S]++;

		for(int left = 1; left <= M-range; left++){
			S -= w_value[left-1];
			S += w_value[left+range-1];
			widthTable[S]++;
			w_max = max(w_max,S);
		}
	}

	int ans = 0;

	for(int i = 1; i <= min(h_max,w_max); i++){
		ans += heightTable[i]*widthTable[i];
	}

	printf("%d\n",ans);

}

int main(){

	int N,M;

	heightTable = new int[1500001];
	widthTable = new int[1500001];

	while(true){
		scanf("%d %d",&N,&M);
		if(N == 0 && M == 0)break;

		for(int i = 0; i <= 1500000; i++){
			heightTable[i] = widthTable[i] = 0;
		}

		func(N,M);
	}

    return 0;
}
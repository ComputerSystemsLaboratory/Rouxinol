#include <stdio.h>

int main(){
	int n, G[100][100], tree[100][99] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &G[i][j]);
		}
	}

	int min0 = 2001;
	tree[0][0]++;
	for (int i = 1; i < n; i++){
		if (G[0][i]+1 && G[0][i] < min0){
			min0 = G[0][i];
			tree[0][1] = i;
		}
	}
	tree[tree[0][1]][0]++;

	for (int connected = 2; connected < n; connected++){
		int min = 2001,mink,minl;
		for (int k = 0; k < n; k++){
			if (!tree[k][0]){
				continue;
			}
			for (int l = 0; l < n; l++){
				if (!tree[l][0] && G[k][l] + 1 && G[k][l] < min){
					min = G[k][l];
					mink = k;
					minl = l;
				}
			}
		}
		tree[mink][++tree[mink][0]] = minl;
		tree[minl][++tree[minl][0]] = mink;
	}

	int sum = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < tree[i][0]; j++){
			sum += G[i][tree[i][j + 1]];
		}
	}

	printf("%d\n", sum >> 1);
	return 0;
}
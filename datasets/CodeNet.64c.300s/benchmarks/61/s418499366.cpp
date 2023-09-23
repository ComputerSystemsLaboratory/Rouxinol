#include<bits/stdc++.h>
int main(){
	int baris, kolom;
	int sum, totalSum=0;
	int ang[105][105];
	scanf("%d %d", &baris, &kolom);
	
	for(int i = 0; i < baris+1; i++){
        for(int j = 0; j < kolom+1; j++){
            ang[i][j] = 0;
        }
    }
	for(int i=0; i<baris; i++){
		for(int j=0; j<kolom; j++){
			scanf("%d", &ang[i][j]);
		}
	}
	for(int i=0; i<baris; i++){
		sum=0;
		for(int j=0; j<kolom; j++){
			sum += ang[i][j];
			ang[baris][j] += ang[i][j];
		}
		ang[i][kolom] = sum;
		totalSum += sum;
	}
	ang[baris][kolom] = totalSum;
	for(int i=0; i<=baris; i++){
		for(int j=0; j<kolom; j++){
			printf("%d ", ang[i][j]);
		}
		printf("%d\n", ang[i][kolom]);
	}
}

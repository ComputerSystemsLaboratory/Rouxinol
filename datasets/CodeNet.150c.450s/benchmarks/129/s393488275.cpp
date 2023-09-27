#include <cstdio>

int main(){
	int r, c;
	int chart[100][100];
	int row[100]={0}, column[100]={0};
	int sum=0;
	
	scanf(" %d %d", &r, &c);
	for(int i=0; i<r; ++i){
		for(int j=0; j<c; ++j){	
			scanf(" %d", &chart[i][j]);
			row[i] += chart[i][j];
		}
	}
	
	for(int i=0; i<c; ++i){
		for(int j=0; j<r; ++j){	
			column[i] += chart[j][i];
		}
		sum+=column[i];	
	}
	
	for(int i=0; i<r; ++i){
		for(int j=0; j<c; ++j){	
			printf("%d ", chart[i][j]);
		}
		printf("%d\n", row[i]);
	}
	
	for(int i=0; i<c; ++i)
		printf("%d ", column[i]);
	printf("%d\n", sum);
	
	return 0;
}
#include <stdio.h>
#include <vector>
using namespace std;

int main(void)
{
	int n, m;	//??????A????????°???????????????b???????´???°
	scanf("%d %d", &n, &m);
	
	typedef vector<int> Row;
	vector<Row> matrixA(100,Row(100));
	vector<Row> matrixB(m,Row(1));
	
	
	for(int i = 0; i < n; i++){	//?????????
		for(int j = 0; j < m; j++){
			 matrixA[i][j] = 0;
		}
	}
	
	for(int i = 0; i < n; i++){	
		for(int j = 0; j < m; j++){
			scanf("%d", &matrixA[i][j]);
		}
	}
	for(int i = 0; i < m; i++){	
		for(int j = 0; j < 1; j++){	
			scanf("%d", &matrixB[i][j]);
		}
	}
	for(int i = 0; i < n; i++){	
		int c;
		int sum = 0;
		for(int j = 0; j < m; j++){
			c = matrixA[i][j] * matrixB[j][0];
			sum += c;
		}
		printf("%d\n", sum);
	}
}
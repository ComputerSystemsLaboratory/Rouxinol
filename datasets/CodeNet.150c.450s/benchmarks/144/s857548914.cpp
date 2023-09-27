#include <stdio.h>
#include <vector>
using namespace std;

typedef vector<long long int> Row;
typedef vector<Row> Matrix;

vector<Row> scan_matrixA(int n, int m)
{	
	vector<Row> matrixA;
	
	for(int i = 0; i < n; i++){
		Row row;		
		for(int j = 0; j < m; j++){
			int a;
			scanf("%d", &a);
			row.push_back(a);
		}
		matrixA.push_back(row);
	}
	return matrixA;
}
vector<Row> scan_matrixB(int m, int l)
{	
	vector<Row> matrixB;
	
	for(int i = 0; i < m; i++){
		Row row;		
		for(int j = 0; j < l; j++){
			int a;
			scanf("%d", &a);
			row.push_back(a);
		}
		matrixB.push_back(row);
	}
	return matrixB;
}
long long int get_answer(vector<Row> matrixA, vector<Row> matrixB, int r, int c)
{
	int m = matrixA[0].size();
	long long int sum = 0;
	for(int i = 0; i < m; i++){
		sum += matrixA[r][i] * matrixB[i][c];
	}
	return sum;
}
vector<Row> keisan(vector<Row> matrixA, vector<Row> matrixB)
{
	int n = matrixA.size();
	int l = matrixB[0].size();
	
	Matrix matrixC(n, Row(l));
	
	for(int i = 0; i < n; i++){	
		for(int j = 0; j < l; j++){
			matrixC[i][j] = get_answer(matrixA, matrixB, i, j);
		}
	}
	return matrixC;
}
void print_matrix(vector<Row> matrix)
{
	int n = matrix.size();
	for(int i = 0; i < n; i++){	
		Row row = matrix[i];
		int l = row.size();
		for(int j = 0; j < l; j++){
			if(j == 0){
				printf("%lld", row[j]);
			}
			else{
				printf(" %lld", row[j]);
			}
		}
		printf("\n");
	}
}

int main(void)
{
	int n, m, l;//??????A????????°?????????A????????°????????????B????????°?????????B????????°
	scanf("%d %d %d", &n, &m, &l);
	
	vector<Row> matrixA;
	vector<Row> matrixB;
	
	matrixA = scan_matrixA(n, m);
	matrixB = scan_matrixB(m, l);
	
	vector<Row> matrix;
	matrix = keisan(matrixA, matrixB);
	
	print_matrix(matrix);
	
	return 0;
}
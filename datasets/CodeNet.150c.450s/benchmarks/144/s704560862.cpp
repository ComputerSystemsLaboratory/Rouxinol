#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
typedef vector<long long int> Row;
typedef vector<Row> Matrix;
//-------------------------------------------------------------
vector<Row> scan_mat(int n, int m); 
vector<Row> keisan(vector<Row> matrixA, vector<Row> matrixB);
void output(vector<Row> matrixC);
long long int get_ans(vector<Row>matrixA, vector<Row>matrixB, int i, int j);
//--------------------------------------------------------------
int main(void)
{
	int n, m, l; //n=???, m=???
	scanf("%d %d %d", &n, &m, &l);
	
	// vector<Row> matrixA(n, Row(m));
	// vector<Row> matrixB(m, Row(n));
	
	vector<Row> matrixA;  //???????????°???????????£?¨?????????????????????????????????????
	vector<Row> matrixB;
	vector<Row> matrixC;
	
	matrixA = scan_mat(n, m);
	matrixB = scan_mat(m, l);
	matrixC = keisan(matrixA,  matrixB);
	output(matrixC);
	
	return 0;
}
//-------------------------------------------------------
vector<Row> scan_mat(int n, int m)
{
	vector<Row> matrix;
	
	for(int i = 0; i < n; i++){     //??????B??????????????????
		Row row;
		for(int j = 0; j < m; j++){  //?????????????????????
			int a;
			scanf("%d", &a);     //???????????????a?????\???
			row.push_back(a);
		}
		matrix.push_back(row);      //	?????????????????????
	}
	return matrix;
}
//-------------------------------------------------------
vector<Row> keisan(vector<Row> matrixA, vector<Row> matrixB)
{
	int n = matrixA.size();  //????????°
	int l = matrixB[0].size();  //????????°
	
	Matrix matrixC(n, Row(l));  //= long long int x[n][l]
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			matrixC[i][j] = get_ans(matrixA, matrixB, i, j);
		}
	}
	return matrixC;
	
}
//-------------------------------------------------------
void output(vector<Row> matrixC)
{
	int n = matrixC.size();
	int l = matrixC[0].size();
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			if(j > 0){
				cout << " ";
			}
			printf("%lld", matrixC[i][j]);
		}
		printf("\n");
	}
}

//--------------------------------------------------------
long long int get_ans(vector<Row>matrixA, vector<Row>matrixB, int i, int j)
{
	int m = matrixA[0].size();
	long long int ans = 0;
	
	for(int k = 0; k < m; k++){
		ans += matrixA[i][k] * matrixB[k][j];
	}
	return ans;
}
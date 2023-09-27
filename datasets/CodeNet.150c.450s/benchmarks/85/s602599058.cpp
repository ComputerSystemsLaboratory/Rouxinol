#include <iostream>
#include <vector>
using namespace std;

struct TMatrixInfo
{
	int RowSize;
	int ColSize;
	TMatrixInfo(int ARowSize, int AColSize)
	{
		RowSize = ARowSize;
		ColSize = AColSize;
	}
	TMatrixInfo()
	{
	}
};

vector<vector<int> > TableResize(int n)
{
	vector<vector<int> > CostCountTable;
	CostCountTable.resize(n);
	for(int i = 0; i < n; i++){
		CostCountTable[i].resize(n);
	}
	return CostCountTable;
}

int Cost(TMatrixInfo A, TMatrixInfo B)
{
	return A.RowSize * A.ColSize * B.ColSize;
}

TMatrixInfo M(int Index1, int Index2, const vector<TMatrixInfo>& MatrixChain)
{
	TMatrixInfo Matrix(MatrixChain[Index1].RowSize, MatrixChain[Index2].ColSize);
	return Matrix;
}

int GetCellValue(const vector<vector<int> >& CostCountTable, const vector<TMatrixInfo>& MatrixChain, int Row, int Col)
{
	if(Col == Row){
		return 0;
	}else{
		int CurrentMinCost;
		for(int i = Row; i < Col; i++){
			int CurrentCost = CostCountTable[Row][i] + Cost(M(Row, i, MatrixChain), M(i+1, Col, MatrixChain)) + CostCountTable[i+1][Col];
			if(i == Row || CurrentCost < CurrentMinCost){
				CurrentMinCost = CurrentCost;
			}
		}
		return CurrentMinCost;
	}
}

void CalcSlantingLine(vector<vector<int> >& CostCountTable, const vector<TMatrixInfo>& MatrixChain, int Col)
{
	int n = MatrixChain.size();
	for(int i = 0; i < n-Col; i++){
		CostCountTable[i][Col+i] = GetCellValue(CostCountTable, MatrixChain, i, Col+i);
	}
}

int MinCalcCost(const vector<TMatrixInfo>& MatrixChain)
{
	int n = MatrixChain.size();
	vector<vector<int> > CostCountTable = TableResize(n);
	for(int i = 0; i < n; i++){
		CalcSlantingLine(CostCountTable, MatrixChain, i);
	}
	return CostCountTable[0][n-1];
}

int main()
{
	int n;
	cin >> n;
	vector<TMatrixInfo> MatrixChain(n);
	for(int i = 0; i < n; i++){
		cin >> MatrixChain[i].RowSize;
		cin >> MatrixChain[i].ColSize;
	}
	cout << MinCalcCost(MatrixChain) << endl;
	return 0;
}
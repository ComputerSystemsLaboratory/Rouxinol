/*
 * ITP1_7_D.cpp
 *
 *  Created on: 2016/05/21
 *      Author: suna
 */

#include <iostream>
#include <vector>

using namespace std;

//row * colの行列を生成
void generateVector(int row, int col, vector< vector<unsigned long> > *v)
{
	v->resize(row);
	for(int i = 0; i < row; i++)
	{
		(*v)[i].resize(col);
	}
}

//row * colの行列への値入力
void inputVector(int row, int col, vector< vector<unsigned long> > *v)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cin >> (*v)[i][j];
		}
	}
}

//row * colの行列の値出力
void outputVector(int row, int col, vector< vector<unsigned long> > *v)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout << (*v)[i][j];

			if(j != col-1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

int main(void)
{
	//行，列, 掛ける行列の列数
	int n, m, l;

	vector< vector<unsigned long> >vec_A;	//行列A
	vector< vector<unsigned long> >vec_B;	//行列B
	vector< vector<unsigned long> >vec_AB; //A×Bの行列

	//行，列数の入力
	cin >> n >> m >> l;

	//行列の生成
	generateVector(n, m, &vec_A);
	generateVector(m, l, &vec_B);
	generateVector(n, l, &vec_AB);

	//行列への値入力
	inputVector(n, m, &vec_A);
	inputVector(m, l, &vec_B);

	//行列の積を計算
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < l; j++)
		{
			unsigned long sum_tmp = 0;
			for(int k = 0; k < m; k++)
			{
				sum_tmp += vec_A[i][k] * vec_B[k][j];
			}
			vec_AB[i][j] = sum_tmp;
		}
	}

	//行列の積を出力
	outputVector(n,l, &vec_AB);
	return 0;
}


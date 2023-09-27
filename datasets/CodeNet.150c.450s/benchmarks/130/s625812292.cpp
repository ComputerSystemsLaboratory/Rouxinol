/*
 * MatrixVectorMultiplication.cpp
 *
 *  Created on: 2014/07/25
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
using namespace std;

// for util
#define FOR(i, a, b) 	for(int i = (a); i < (b); i++)
#define REP(i, n)		FOR(i, 0, n)
#define PB				push_back
#define MP				make_pair

class C_Matrix {
private:
	vector<vector<int> > m_val;
public:
	C_Matrix(int n, int m) {
		vector<int> vecZeros;
		REP(i, m) vecZeros.PB(0);
		REP(i, n) m_val.PB(vecZeros);
	}

	int GetRow() const {
		return m_val.size();
	}

	int GetCol() const {
		return m_val.at(0).size();
	}

	C_Matrix operator* (const C_Matrix a_Matrix) {
		const int n = this->GetRow();
		const int l = this->GetCol();
		const int m = a_Matrix.GetCol();
		C_Matrix RetMatrix(n, m);
		REP(i, n)REP(j, m)REP(k, l)
				RetMatrix.m_val[i][j] += this->m_val[i][k] * a_Matrix.m_val[k][j];
		return RetMatrix;
	}

	void SetMatrixElement(const vector<vector<int> > a_val) {
		m_val = a_val;
	}

	vector<vector<int> > GetMatrixElement() {
		return m_val;
	}

};

int main(void) {
	int n, m;
	cin >> n >> m;

	vector<vector<int> > vecMatrix1;
	vector<int> InputVal1;
	REP(i, n) {
		REP(j, m) {
			int a = 0;
			cin >> a;
			InputVal1.PB(a);
		}
		vecMatrix1.PB(InputVal1);
		InputVal1.clear();
	}
	C_Matrix Matrix(n, m);
	Matrix.SetMatrixElement(vecMatrix1);

	vector<vector<int> > vecMatrix2;
	vector<int> InputVal2;
	REP(i, m) {
		REP(j, 1) {
			int b = 0;
			cin >> b;
			InputVal2.PB(b);
		}
		vecMatrix2.PB(InputVal2);
		InputVal2.clear();
	}
	C_Matrix Vector(m, 1);
	Vector.SetMatrixElement(vecMatrix2);

	C_Matrix RetMatrix = Matrix * Vector;
	vector<vector<int> > MatrixVal = RetMatrix.GetMatrixElement();

	REP(i, RetMatrix.GetRow()) {
		vector<int> tmp = MatrixVal.at(i);
		REP(j, RetMatrix.GetCol()) {
			cout << tmp.at(j);
		}
		cout << endl;
	}

	return 0;
}
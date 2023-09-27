/*
 * MatrixMultiplication.cpp
 *
 *  Created on: 2014/08/03
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

typedef long long ll;

template<class T>
class C_Matrix {
private:
	vector<vector<T> > m_val;
public:
	C_Matrix(T n, T m) {
		vector<T> vecZeros;
		REP(i, m) vecZeros.PB(0);
		REP(i, n) m_val.PB(vecZeros);
	}

	T GetRow() const {
		return m_val.size();
	}

	T GetCol() const {
		return m_val.at(0).size();
	}

	C_Matrix operator* (const C_Matrix a_Matrix) {
		const T n = this->GetRow();
		const T l = this->GetCol();
		const T m = a_Matrix.GetCol();
		C_Matrix RetMatrix(n, m);
		REP(i, n)REP(j, m)REP(k, l)
				RetMatrix.m_val[i][j] += this->m_val[i][k] * a_Matrix.m_val[k][j];
		return RetMatrix;
	}

	void SetMatrixElement(const vector<vector<T> > a_val) {
		m_val = a_val;
	}

	vector<vector<T> > GetMatrixElement() {
		return m_val;
	}

};

int main(void) {
	ll n, m, l;
	cin >> n >> m >> l;

	vector<vector<ll> > vecMatrix1;
	vector<ll> InputVal1;
	REP(i, n) {
		REP(j, m) {
			ll a = 0;
			cin >> a;
			InputVal1.PB(a);
		}
		vecMatrix1.PB(InputVal1);
		InputVal1.clear();
	}
	C_Matrix<ll> Matrix1(n, m);
	Matrix1.SetMatrixElement(vecMatrix1);

	vector<vector<ll> > vecMatrix2;
	vector<ll> InputVal2;
	REP(i, m) {
		REP(j, l) {
			ll b = 0;
			cin >> b;
			InputVal2.PB(b);
		}
		vecMatrix2.PB(InputVal2);
		InputVal2.clear();
	}
	C_Matrix<ll> Matrix2(m, l);
	Matrix2.SetMatrixElement(vecMatrix2);

	C_Matrix<ll> RetMatrix = Matrix1 * Matrix2;
	vector<vector<ll> > MatrixVal = RetMatrix.GetMatrixElement();

	REP(i, RetMatrix.GetRow()) {
		vector<ll> tmp = MatrixVal.at(i);
		REP(j, RetMatrix.GetCol()) {
			cout << tmp.at(j);
			if (j != RetMatrix.GetCol() - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
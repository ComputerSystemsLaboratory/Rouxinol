#include <bits/stdc++.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////// ここからコピペ ////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// N*M型行列
template<typename T = int64_t>
class Matrix {
private:
	class RowVector {
	private:
		std::vector<T> container_;
	
	public:
		RowVector(const int column_size)
			: container_(column_size){}
		T& operator[](const int c) { return container_[c]; }
	};

	std::vector<RowVector> container_;

public:
	int N, M;
	Matrix(const int row_size, const int column_size)
		: N(row_size), M(column_size), container_(row_size, RowVector(column_size)){}
	RowVector& operator[](const int r) { return container_[r]; }

	Matrix<T> operator+(Matrix<T>& mat)
	{
		Matrix ret{*this};
		for (int r_i{}; r_i < (int)container_.size(); r_i++)
			for (int c_i{}; c_i < (int)container_.front().size(); c_i++)
				ret[r_i][c_i] += mat[r_i][c_i];
		return ret;
	}
	Matrix<T> operator-(Matrix<T>& mat)
	{
		Matrix ret{*this};
		for (int r_i{}; r_i < (int)container_.size(); r_i++)
			for (int c_i{}; c_i < (int)container_.front().size(); c_i++)
				ret[r_i][c_i] -= mat[r_i][c_i];
		return ret;
	}
	Matrix<T> operator*(Matrix<T>& mat)
	{
		Matrix ret(this->N, mat.M);
		for (int r_i{}; r_i < this->N; r_i++)
			for (int c_i{}; c_i < mat.M; c_i++)
				for (int l_i{}; l_i < this->M; l_i++)
					ret[r_i][c_i] += (*this)[r_i][l_i] * mat[l_i][c_i];
		return ret;
	}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////// ここまでコピペ ////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=3035
int main()
{
	int n, m, l;
	scanf("%d%d%d", &n, &m, &l);
	Matrix<> A(n, m), B(m, l);
	for (int i{}; i < n; i++)
		for (int j{}; j < m; j++)
			scanf("%lld", &A[i][j]);
	for (int i{}; i < m; i++)
		for (int j{}; j < l; j++)
			scanf("%lld", &B[i][j]);
	Matrix<> C = A * B;
	for (int i{}; i < n; i++)
		for (int j{}; j < l; j++)
			printf("%lld%c", C[i][j], j == l - 1? '\n': ' ');
	return 0;
}

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
		const T& operator[](const int c) const { return container_[c]; }
	};

	std::vector<RowVector> container_;

public:
	const int N, M;
	Matrix(const int row_size, const int column_size)
		: N(row_size), M(column_size), container_(row_size, RowVector(column_size)){}
	Matrix(Matrix<T>&& mat)
		: N(mat.N), M(mat.M), container_(std::move(mat.container_)){}
	Matrix(Matrix<T>& mat)
		: N(mat.N), M(mat.M), container_(mat.container_){}
	RowVector& operator[](const int r) { return container_[r]; }
	const RowVector& operator[](const int r) const { return container_[r]; }

	// 環の演算
	Matrix<T> operator+(const Matrix<T>& mat) const
	{
		Matrix<T> ret{*this};
		for (int r_i{}; r_i < N; r_i++)
			for (int c_i{}; c_i < M; c_i++)
				ret[r_i][c_i] += mat[r_i][c_i];
		return std::move(ret);
	}
	Matrix<T> operator-(const Matrix<T>& mat) const
	{
		Matrix<T> ret{*this};
		for (int r_i{}; r_i < N; r_i++)
			for (int c_i{}; c_i < M; c_i++)
				ret[r_i][c_i] -= mat[r_i][c_i];
		return std::move(ret);
	}
	Matrix<T> operator*(const Matrix<T>& mat) const
	{
		Matrix<T> ret(this->N, mat.M);
		for (int r_i{}; r_i < this->N; r_i++)
			for (int c_i{}; c_i < mat.M; c_i++)
				for (int l_i{}; l_i < this->M; l_i++)
					ret[r_i][c_i] += (*this)[r_i][l_i] * mat[l_i][c_i];
		return std::move(ret);
	}
	std::vector<T> operator*(const std::vector<T>& vec) const
	{
		std::vector<T> ret(N);
		for (int r_i{}; r_i < N; r_i++)
			for (int c_i{}; c_i < M; c_i++)
				ret[r_i] += (*this)[r_i][c_i] * vec[c_i];
		return std::move(ret);
	}

	// 代入演算子
	Matrix<T>& operator+=(const Matrix& mat)
	{
		*this = *this + mat;
		return *this;
	}
	Matrix<T>& operator-=(const Matrix& mat)
	{
		*this = *this - mat;
		return *this;
	}
	Matrix<T>& operator*=(const Matrix& mat)
	{
		*this = *this * mat;
		return *this;
	}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////// ここまでコピペ ////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=3035
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	Matrix<> A(n, m);
	for (int i{}; i < n; i++)
		for (int j{}; j < m; j++)
			scanf("%lld", &A[i][j]);
	std::vector<int64_t> b(m);
	for (auto& e: b)
		scanf("%lld", &e);
	std::vector<int64_t> c(A * b);
	for (auto& e: c) printf("%lld\n", e);
	return 0;
}

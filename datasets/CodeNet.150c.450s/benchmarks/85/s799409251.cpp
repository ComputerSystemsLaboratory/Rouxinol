#include <cstdio>

struct Matrix
{
  int row;
  int column;
  int multiple_time;

  Matrix():
    row(0), column(0), multiple_time(0)
  {}

  Matrix(int r, int c, int m):
    row(r), column(c), multiple_time(m)
  {}
};

Matrix multiple(Matrix mat1, Matrix mat2)
{
  return Matrix(mat1.row,
                mat2.column,
                mat1.multiple_time + mat2.multiple_time + mat1.row * mat1.column * mat2.column);
}

Matrix matrices[100];
Matrix multiplication[100][100];

Matrix minimum_multiple_time(int i, int j)
{
  if (i == j)
    return matrices[i];

  Matrix min = multiple(multiplication[i][i], multiplication[i + 1][j]);

  for (int k = 1; k < j - i; ++k)
  {
    Matrix cur_matrix = multiple(multiplication[i][i + k], multiplication[i + k + 1][j]);
    if (min.multiple_time > cur_matrix.multiple_time)
      min = cur_matrix;
  }

  return min;
}

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i)
    scanf("%d%d", &matrices[i].row, &matrices[i].column);

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; i + j < n; ++j)
    {
      multiplication[j][i + j] = minimum_multiple_time(j, i + j);
    }
  }

  printf("%d\n", multiplication[0][n - 1].multiple_time);

  return 0;
}

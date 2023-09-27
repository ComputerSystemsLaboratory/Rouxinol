

#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long uint64;
typedef vector<uint64> VI;
typedef vector<VI> Matrix;

void readMatrix(Matrix &mat, const int &row, const int &column)
{
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < column; c++)
        {
            cin >> mat[r][c];
        }
    }
}

void multipleMatrix(const Matrix &matA, const Matrix &matB, Matrix &matC)
{
    size_t l = matA.size();
    size_t m = matB.size();
    size_t n = matB[0].size();

    for(size_t r = 0; r < l; r++)
    {
        for(size_t c = 0; c < n; c++)
        {
            uint64 tmp = 0;
            for(size_t i = 0; i < m; i++)
            {
                tmp += matA[r][i] * matB[i][c];
            }
            matC[r][c] = tmp;
        }
    }
}

void outputMatrix(const Matrix &mat)
{
    size_t r = mat.size();
    size_t c = mat[0].size();

    for(size_t i = 0; i < r; i++)
    {
        for(size_t j = 0; j < c; j++)
        {
            cout << mat[i][j];
            if(j != c - 1){ cout << " "; }
        }
        cout << "\n";
    }

}

int main()
{
    int l = 0, m = 0, n =0;
    cin >> n >> m >> l;

    Matrix matA(n, VI(m, 0));
    Matrix matB(m, VI(l, 0));
    Matrix matC(n, VI(l, 0));

    //Read matA, matB
    readMatrix(matA, n, m);
    readMatrix(matB, m, l);

    multipleMatrix(matA, matB, matC);

    outputMatrix(matC);

    return 0;
}
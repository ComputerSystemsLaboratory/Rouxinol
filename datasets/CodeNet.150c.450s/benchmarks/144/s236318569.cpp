#include <iostream>
#include <vector>

using namespace std;
typedef vector<long long int> Row;
typedef vector<Row> Matrix;

Matrix ScanMatrix(int n, int m)
{
    Matrix matrix(n, Row(m));
    for(int r = 0; r < n; ++r){
        for(int c = 0; c < m; ++c){
            cin >> matrix[r][c];
        }
    }
    return matrix;
}
long long int GetElement(Matrix a, Matrix b, int r, int c)
{
    int s = a[r].size();
    long long int result = 0;
    for(int i = 0; i < s; ++i){
        result += a[r][i] * b[i][c];
    }
    return result;
}
Matrix ProductMatrix(Matrix a, Matrix b)
{
    int n = a.size();
    int m = b[0].size();
    Matrix matrix(n, Row(m));
    for(int r = 0; r < n; ++r){
        for(int c = 0; c < m; ++c){
            matrix[r][c] = GetElement(a, b, r, c);
        }
    }
    return matrix;
}
void PrintMatrix(Matrix a)
{
    int n = a.size();
    for(int r = 0; r < n; ++r){
        int m = a[r].size();
        for(int c = 0; c < m; ++c){
            if(c){
                cout << " ";
            }
            cout << a[r][c];
        }
        cout << endl;
    }
}
int main()
{
    int n, m, l;
    cin >> n >> m >> l;
    Matrix A = ScanMatrix(n, m);
    Matrix B = ScanMatrix(m, l);
    Matrix C = ProductMatrix(A, B);
    PrintMatrix(C);
    return 0;
}
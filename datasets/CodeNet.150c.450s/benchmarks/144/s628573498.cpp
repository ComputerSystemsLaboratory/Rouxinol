#include<iostream>
#include<vector>

using namespace std;

void makeMatrix(int row,int line,vector<vector<long int>>& matrix)
{
  int value;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<line;j++)
    {
      cin >> value;
      matrix[i].push_back(value);
    }
  }
}

void calcMatrix(vector<vector<long int>>& a,vector<vector<long int>>& b,vector<vector<long int>>& c)
{
  long int value;
  for(int i=0;i<a.size();i++)
  {
    for(int j=0;j<b[0].size();j++)
    {
      value=0;
      for(int k=0;k<b.size();k++)
      {
        value+=a[i][k]*b[k][j];
      }
      c[i].push_back(value);
    }
  }
}

int main(int argc, char* argv[])
{
  int n,m,l;
  cin >> n >> m >> l;
  vector<vector<long int>> matrix1(n);
  vector<vector<long int>> matrix2(m);
  vector<vector<long int>> matrix3(n);
  makeMatrix(n,m,matrix1);
  makeMatrix(m,l,matrix2);
  calcMatrix(matrix1,matrix2,matrix3);
  for (int i=0;i<matrix3.size();i++)
  {
    for(int j=0;j<matrix3[i].size();j++)
    {
      cout << matrix3[i][j];
      if(j!=matrix3[i].size()-1)cout << " ";
    }
    cout << endl;
  }
}
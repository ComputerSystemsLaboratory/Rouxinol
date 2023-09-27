#include<iostream>
#include<vector>

using namespace std;

void calcMatrix(vector<vector<int>>& a)
{
  int sum;
  vector<int> temp;
  for(int i=0;i<a.size();i++)
  {
    sum=0;
    for(int value:a[i])
    {
      sum+=value;
    }
    a[i].push_back(sum);
  }
  for(int i=0;i<a[0].size();i++)
  {
    sum=0;
    for(int j=0;j<a.size();j++)
    {
      sum+=a[j][i];
    }
    temp.push_back(sum);
  }
  a.push_back(temp);
}

int main(int argc, char* argv[])
{
  int r,c,input;
  cin >> r >> c;
  vector<vector<int>> matrix(r);
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cin >> input;
      matrix[i].push_back(input);
    }
  }
  calcMatrix(matrix);
  for(int i=0;i<matrix.size();i++)
  {
    for(int j=0;j<matrix[i].size();j++)
    {
      cout << matrix[i][j];
      if(j!=matrix[i].size()-1) cout << " ";
    }
    cout << endl;
  }
}
#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char* argv[])
{
  int row, line, input,result;
  cin >> row >> line;
  vector<vector<int>> matrix1(row);
  vector<int> matrix2;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<line;j++)
    {
      cin >> input;
      matrix1[i].push_back(input);
    }
  }
  for(int i=0;i<line;i++)
  {
    cin >> input;
    matrix2.push_back(input);
  }
  for(int i=0;i<row;i++)
  {
    result = 0;
    for(int j=0;j<line;j++)
    {
      result+=matrix1[i][j]*matrix2[j];
    }
    cout << result << endl;
  }
}
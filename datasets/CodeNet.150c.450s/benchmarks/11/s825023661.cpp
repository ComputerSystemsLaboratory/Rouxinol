#include<iostream>
#include<vector>

using namespace std;

void CheckCard(char mark,int number,vector<vector<int>>& v)
{
  switch(mark)
  {
    case 'S':
      v[0][number-1]=1;
      break;
    case 'H':
      v[1][number-1]=1;
      break;
    case 'C':
      v[2][number-1]=1;
      break;
    case 'D':
      v[3][number-1]=1;
      break;
  }
}

void PrintCard(vector<vector<int>>& v)
{
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<13;j++)
    {
      if(v[i][j]==0)
      {
        switch (i)
        {
          case 0:
            cout << "S " << j+1 << endl;
            break;
          case 1:
            cout << "H " << j+1 << endl;
            break;
          case 2:
            cout << "C " << j+1 << endl;
            break;
          case 3:
            cout << "D " << j+1 << endl;
            break;
        }
      }
    }
  }
}

int main(int argc, char* argv[])
{
  int total,number;
  char mark;
  vector<vector<int>> trump(4,vector<int>(13,0));
  cin >> total;
  for(int i=0;i<total;i++)
  {
    cin >> mark >> number;
    CheckCard(mark,number,trump);
  }
  PrintCard(trump);
}
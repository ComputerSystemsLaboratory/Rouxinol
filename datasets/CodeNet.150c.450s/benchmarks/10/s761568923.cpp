#include<iostream>
#include<vector>
using namespace std;

void Operation(int b,int f,int r,int v,vector<vector<vector<int>>>& info)
{
  info[b][f][r]+=v;
}

void writeline(vector<vector<vector<int>>>& info)
{
  for(int i=0;i<info.size();i++)
  {
    for(int j=0;j<info[i].size();j++)
    {
      for(int k=0;k<info[i][j].size();k++)
      {
        cout << " " << info[i][j][k];
      }
      cout << endl;
    }
    if(i<info.size()-1) cout << "####################" << endl;
  }
}

int main(int argc,char* argv[])
{
  int count=0;
  int b,f,r,v;
  vector<vector<vector<int>>> information(4,vector<vector<int>>(3,vector<int>(10,0)));
  cin >> count;
  for(int i=0;i<count;i++)
  {
    cin >> b >> f >> r >> v;
    Operation(b-1,f-1,r-1,v,information);
  }
  writeline(information);
}
#include"iostream"
#include"vector"
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector< vector<int> > matrix (n, vector<int>(n) );
  vector<int> visit;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)matrix[i][j]=0;
      int y;
      cin>>y;
      int num;
      cin>>num;
      for(int j=0;j<num;j++)
        {
          int x;
          cin>>x;
          matrix[y-1][x-1]=1;
        }
    }
  for(int i=0;i<n;i++)
    {
      cout<<matrix[i][0];
      for(int j=1;j<n;j++)
        {
          cout<<" "<<matrix[i][j];
        }
      cout<<endl;
    }
  return 0;
}

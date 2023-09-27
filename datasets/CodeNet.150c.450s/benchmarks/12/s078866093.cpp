#include"iostream"
#include"vector"
using namespace std;
int main()
{
  vector<int> branch;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      int num;
      cin>>num;
      branch.push_back(num);
    }
  for(int i=0;i<branch.size();i++)
    {
      cout<<"node "<<i+1<<": key = "<<branch[i]<<", ";
      if(i>0)
        {
          cout<<"parent key = "<<branch[(i+1)/2-1]<<", ";
        }
      if(i*2+1<n)
        {
          cout<<"left key = "<<branch[i*2+1]<<", ";
        }
      if(i*2+2<n)
        {
          cout<<"right key = "<<branch[i*2+2]<<", ";
        }
      cout<<endl;
    }
  return 0;
}

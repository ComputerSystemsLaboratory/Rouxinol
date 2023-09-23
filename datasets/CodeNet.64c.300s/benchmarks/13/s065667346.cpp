#include"iostream"
using namespace std;
int main()
{
  int a,b,c;
  int n;
  cin>>n;
  c=1;
  a=1;b=1;
  for(int i=1;i<n;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
  cout<<c<<endl;
  return 0;
}

#include<iostream>
using namespace std;
#define rep(i,j) for(i=0;i<j;i++)
int main()
{

  int n;

  while(cin>>n)
    {

      int a,b,c,d;
      int cnt=0;
      rep(a,10)rep(b,10)rep(c,10)rep(d,10)
        {
          if(a+b+c+d==n)cnt++;
        }
      cout << cnt<<endl;
    }
  return 0;

}
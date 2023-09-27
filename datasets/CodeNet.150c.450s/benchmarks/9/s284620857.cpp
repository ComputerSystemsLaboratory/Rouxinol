#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  string str;
  string buf;
  string ans[200];
  int m;
  int x;
  int count=0;

  cin >> str;
  while(str!="-")
    {
      cin >> m;

      for(int i=0;i<m;i++)
	{
	  cin >> x;
	  buf=str.substr(0,x);
	  // cout << buf << endl;
	  str.replace(0,x,"");
	  // cout << str << endl;
	  str+=buf;
	  // cout << str << endl;
	  ans[count]=str;
	}
      cin >> str;
      count++;
    }

  for(int i=0;i<count;i++)
    {
      cout << ans[i] << endl;
    }

  return 0;
}
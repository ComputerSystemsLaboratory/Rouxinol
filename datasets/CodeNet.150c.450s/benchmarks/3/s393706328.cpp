#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str, func;
  int n;
  cin >> str >> n;

  for(int i=0;i<n;i++)
    {
      cin >> func;
      
      if(func=="print")
	{
	  int a, b;
	  cin >> a >> b;
	  cout << str.substr(a, b-a+1) << endl;
	}
      if(func=="replace")
	{
	  int a, b;
	  string p;
	  cin >> a >> b >> p;
	  str = str.replace(a, b-a+1, p);
	}
      if(func=="reverse")
	{
	  int a, b;
	  string p, q;
	  cin >> a >> b;
	  p = str.substr(a, b-a+1);
	  q = p.at(p.size()-1);
	  for(int i=1;i <= p.size()-1;i++)
	    q += p.at(p.size()-1-i);
	  str = str.replace(a, b-a+1, q);
	}
    }
}
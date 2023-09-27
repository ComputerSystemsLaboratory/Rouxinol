#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int
main ()
{

  string str;
  cin >> str;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++){
      
      string a = "";
      int b = 0;
      int c = 0;
      string d = "";
      cin >> a;
      cin>>b>> c;
      
 
      if (a == "replace")
	{
	  cin >> d;
	  str.replace (b, c - b + 1, d);

	}
      else if (a == "reverse")
	{
	  string s=str.substr (b, c - b + 1);
	  reverse (s.begin (),s.end ());
           str=str.substr(0,b)+s+str.substr(c+1,str.length());
           
          
	}
      else if (a=="print")
	{
	  cout << str.substr (b, c - b + 1) << endl;

	}
  }

  return 0;
}

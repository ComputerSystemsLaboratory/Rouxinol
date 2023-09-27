#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
  string str;
  cin >> str;
  for(int i=0;str[i]!='\0';i++)
    {
      if('A'<=str[i]&&str[i]<='Z')
	str[i]=(char)(str[i]-'A'+'a');
    }

  string s;
  int sum=0;
  cin >> s;
  while(s!="END_OF_TEXT")
    {
      for(int i=0;s[i]!='\0';i++)
	{
	  if('A'<=s[i]&&s[i]<='Z')
	    s[i]=(char)(s[i]-'A'+'a');
	}
      if(str==s)
	sum++;
      cin >> s;
    }
  cout << sum << endl;

  return 0;
}
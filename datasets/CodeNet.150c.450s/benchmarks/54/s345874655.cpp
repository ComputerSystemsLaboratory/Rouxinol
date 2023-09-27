#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string str1, str2;
  int i = 0;
  
  cin >> str1;
  if (str1 ==  "END_OF_TEXT")
    {
	  return 0;
    }
  transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
  
  cin >> str2;
  
  while ( str2 != "END_OF_TEXT")
    {
      transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

      if (str1 == str2)
	{
	  i++;
	}
      
      cin >> str2;
    }
  
  cout << i << endl;
   
  return 0;
  
}
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int str_size=0;
  char temp[20];
  char str[20];
  cin>>str;

  str_size=strlen(str);
  strcpy(temp, str);
  
  for(int i=0;i<str_size;i++)
    str[i]=temp[str_size-1-i];

  cout<<str<<endl;
  
  return 0;
}


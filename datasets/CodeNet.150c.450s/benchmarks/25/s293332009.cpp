#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{
  string str;
  int num;
  int sum[26]={};
  // getline(cin,str);
  // fgets(str,stdin);
  while(getline(cin,str))
    {
  for(int i=0;i<str.size();i++)
    {
      if('a'<=str[i]&&str[i]<='z')
	  sum[str[i]-'a']++;
      if('A'<=str[i]&&str[i]<='Z')
	sum[str[i]-'A']++;
    }
    }

  for(int j=0;j<26;j++)
    {
      cout << (char)('a'+j) << " : " << sum[j] << endl;
    }

  return 0;
}
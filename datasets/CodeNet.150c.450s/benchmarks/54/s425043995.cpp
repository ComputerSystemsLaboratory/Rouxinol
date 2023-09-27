#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
  char s[1000],c[10];
  int sum=0;
  cin>>c;
  for(int i=0;i<strlen(c);i++)c[i]=tolower(c[i]);
  while(1){
    cin>>s;
    if(strcmp(s,"END_OF_TEXT")==0)break;
    for(int i=0;i<strlen(s);i++)s[i]=tolower(s[i]);
    if(strcmp(s,c)==0)sum++;
  }
  cout<<sum<<endl;
  return 0;
}
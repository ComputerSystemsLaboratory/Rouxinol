#include <iostream>
using namespace std;
int main()
{
  int n[26];
  for(int i=0;i<26;i++)
    n[i]=0;
  char x;
  while(cin.get(x))
  {
    if((('a'<=x)&&(x<='z'))||(('A'<=x)&&(x<='Z')))
      n[x-'a'+(('A'<=x)&&(x<='Z'))*('a'-'A')]++;
  }
  for(int i=0;i<26;i++)
    cout<<(char)('a'+i)<<" : "<<n[i]<<endl;
}
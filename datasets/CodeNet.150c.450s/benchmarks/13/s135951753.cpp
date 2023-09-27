#include <iostream>

using namespace std;

int main()
{
  char s[100];
  char p[100];
  int i;
  int j;
  int start;
  
  cin >> s >> p;
  
  i=0;
  
  Roop:;
  
  for(;s[i]!='\0';i++)
  {
    if(s[i]==p[0])
    {
      start=i;
      goto Next;
    }
  }
  
  cout << "No\n";
  goto Exit;
  
  Next:;
  
  for(i=start,j=0;p[j]!='\0';j++ , i++)
  {
    if(s[i]=='\0')
      i=0;
    
    if(s[i]!=p[j])
    {
      i=start+1;
      goto Roop;
    }
  }
  cout << "Yes\n";
  Exit:;
}
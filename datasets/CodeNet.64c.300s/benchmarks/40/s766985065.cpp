#include <iostream>
using namespace std;
int main()
{
  char s[1201]="";
  int n=0;
  while(1)
  {
    cin.get(s[n]);
    if(s[n]=='\n') break;
    n++;
  }
  for(int i=0;i<n;i++)
    s[i]=(char)(s[i]+(('a'<=s[i]&&s[i]<='z')*('A'-'a')-(('A'<=s[i]&&s[i]<='Z')*('A'-'a'))));
  cout<<s;
}
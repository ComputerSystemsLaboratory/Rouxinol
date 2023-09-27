#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
  char s[1001];
  int x;
  while(1)
  {
    cin.getline(s,1001);
    if(atoi(s)==0)break;
    int sum=0;
    for(int i=0;s[i];i++)
      sum+=int(s[i]-'0');
    cout<<sum<<endl;
  }
}
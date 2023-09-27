#include <iostream>
#include <string>
using namespace std;
int main()
{
  string w;
  cin>>w;
  for(int i=0;w[i];i++)
    if((('a'<=w[i])&&(w[i]<='z'))||(('A'<=w[i])&&(w[i]<='Z')))
    w[i]=w[i]-'a'+(('A'<=w[i])&&(w[i]<='Z'))*('a'-'A');
  string t;
  int n=0;
  while(1)
  {
    cin>>t;
    if(t=="END_OF_TEXT") break;
    for(int i=0;t[i];i++)
      if((('a'<=t[i])&&(t[i]<='z'))||(('A'<=t[i])&&(t[i]<='Z')))
        t[i]=t[i]-'a'+(('A'<=t[i])&&(t[i]<='Z'))*('a'-'A');

    if(t==w) n++;
  }
  cout<<n<<endl;
}
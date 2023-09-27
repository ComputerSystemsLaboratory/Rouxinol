#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int ps,pt;

int sdiff(string sx, string tx)
{
  if(sx == tx)
    {ps=1; pt=1;}
  else if(sx > tx)
    {ps=3; pt=0;}
  else
    {ps=0; pt=3;}
  return 0;
}

int main(void)
{
  int n,k,is,it;
  string s[1001]={},t[1001]={};

  cin >> n;

  is=0; it=0;
  for(k = 1; k <= n; k++){
    cin >> s[k] >> t[k];
    sdiff(s[k],t[k]);
    is=is+ps; it=it+pt;
  }

  cout << is << " " << it << endl;

  return 0;
}
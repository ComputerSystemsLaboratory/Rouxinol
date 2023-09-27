#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
  int l;
  string str;
  string s;

  cin>>str;

  l=str.size();

  for(int i=l-1;i>=0;i--)
    {
      cout<<str[i];
    }

  puts("");

}
#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int q;
  int a,b;
  
  cin >> s;

  cin >> q;

  string order,str;
  
  for(int i=0;i < q;i++)
    {
      cin >> order;
      if(order == "replace")
	{
	  cin >> a >> b >> str;
	  s.replace(a,str.size(),str);
	}
      else if(order == "reverse")
	{
	  cin >> a >> b;
	  reverse(s.begin()+a, s.begin()+b+1);
	}
      else if(order == "print")
	{
	  cin >> a >> b;
	  for(int i=a;i <= b;i++)
	    {
	      printf("%c",s[i]);
	    }
	  printf("\n");
	}
    }
  return 0;
}

  


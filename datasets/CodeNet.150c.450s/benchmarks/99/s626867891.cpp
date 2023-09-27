#include<iostream>
#include<sstream>
using namespace std;

template<class T>inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}


int toint(string s)
{
  int ans=0;
  for(int i=0;i<s.size();)
    {
      int tmp=1;
      if(s[i]>'1'&&s[i]<='9')
	{
	  tmp=(s[i]-'0');
	  i++;
	}
      if(s[i]=='m')
	ans+=tmp*1000;
      if(s[i]=='c')
	ans+=tmp*100;
      if(s[i]=='x')
	ans+=tmp*10;
      if(s[i]=='i')
	ans+=tmp*1;
      i++;
    }
  
  return ans;
}

string tostr(int x)
{ 
  string s;
  string ds="ixcm";
  for(int i=0;i<4;i++)
    {
      if(x%10>0)
	{
	  s=ds[i]+s;
	  if(x%10>1)
	      s=(char)((x%10)+'0')+s;
	}
      x/=10;
    }
  return s;

}

int main()
{
  int n;
  cin>>n;
  for(;n--;)
    {
      string s1,s2;
      cin>>s1>>s2;
      cout<<tostr(toint(s1)+toint(s2))<<endl;
    }
}
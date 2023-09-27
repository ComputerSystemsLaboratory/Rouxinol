#include <bits/stdc++.h>
using namespace std;
int ans=0;
string s;
const double eps=1e-9;
typedef vector<int> vi;
typedef long long ll;
typedef pair<string,string> pss;
vector<pss> vpss;
int main(void)
{
  int n;
  cin >> n;
  for(int i=0;i<n;i++)
    {
      string tmp1,tmp2;
      cin >> tmp1 >> tmp2;
      vpss.push_back(pss(tmp1,tmp2));
    }
  for(int i=0;i<n;i++)
    {
      int ans=0;
      int num=1;
      string num1=vpss[i].first;
      string num2=vpss[i].second;
      for(int j=0;j<num1.size();j++)
	{
	  if(num1[j]=='m')
	    {
	      ans+=1000*num;
	      num=1;
	    }
	  else if(num1[j]=='c')
	    {
	      ans+=100*num;
	      num=1;
	    }
	  else if(num1[j]=='x')
	    {
	      ans+=10*num;
	      num=1;
	    }
	  else if(num1[j]=='i')
	    {
	      ans+=num;
	      num=1;
	    }
	  else
	    {
	      num=(int)(num1[j]-'0');
	    }
	}
      for(int j=0;j<num2.size();j++)
	{
	  if(num2[j]=='m')
	    {
	      ans+=1000*num;
	      num=1;
	    }
	  else if(num2[j]=='c')
	    {
	      ans+=100*num;
	      num=1;
	    }
	  else if(num2[j]=='x')
	    {
	      ans+=10*num;
	      num=1;
	    }
	  else if(num2[j]=='i')
	    {
	      ans+=num;
	      num=1;
	    }
	  else
	    {
	      num=(int)(num2[j]-'0');
	    }
	}
      int tho=ans/1000;
      ans%=1000;
      int hun=ans/100;
      ans%=100;
      int ten=ans/10;
      ans%=10;
      int one=ans;
      string mcxi="";
      if(tho>0)
	{
	  if(tho>1)
	    {
	      mcxi+=to_string(tho);
	    }
	  mcxi+='m';
	}
      if(hun>0)
	{
	  if(hun>1)
	    {
	      mcxi+=to_string(hun);
	    }
	  mcxi+='c';
	}
      if(ten>0)
	{
	  if(ten>1)
	    {
	      mcxi+=to_string(ten);
	    }
	  mcxi+='x';
	}
      if(one>0)
	{
	  if(one>1)
	    {
	      mcxi+=to_string(one);
	    }
	  mcxi+='i';
	}
      cout << mcxi << endl;
    }
  return 0;
}


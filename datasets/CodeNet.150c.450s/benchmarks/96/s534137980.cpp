#include<iostream>

using namespace std;

int main()
{
  int ab;
  cin>>ab;

  for(;ab--;)
    {
      string s;
      cin>>s;
      char x;
      int count=0;
      bool out=true;
      for(int i=0;i<s.size();i++)
	{
	  if(s[i]!='0')
	    count++;
	    
	  if(s[i]=='1')
	    {
	      string t=".,!? ";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else
	      x=t[count%t.size()-1];
	    }
	  if(s[i]=='2')
	    {
	      string t="abc";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else
	      x=t[count%t.size()-1];
	    }
	  if(s[i]=='3')
	    {
	      string t="def";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else

	      x=t[count%t.size()-1];
	    }
	  if(s[i]=='4')
	    {
	      string t="ghi";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else
	      x=t[count%t.size()-1];
	    }

	  if(s[i]=='5')
	    {
	      string t="jkl";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else
	      x=t[count%t.size()-1];
	    }
	  if(s[i]=='6')
	    {
	      string t="mno";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else
	      x=t[count%t.size()-1];
	    }
	  if(s[i]=='7')
	    {
	      string t="pqrs";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else
	      x=t[count%t.size()-1];
	    }
	  if(s[i]=='8')
	    {
	      string t="tuv";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else
	      x=t[count%t.size()-1];
	    }
	  if(s[i]=='9')
	    {
	      string t="wxyz";
	      if(count%t.size()==0)
		x=t[t.size()-1];
	      else
	      x=t[count%t.size()-1];
	    }
	  if(s[i]=='0')
	    {
	      if(count!=0)
		{
		  cout<<x;
		  out=false;
		}
	      count=0;

	    }
	}
      if(!out)
      cout<<endl;
    } 

}
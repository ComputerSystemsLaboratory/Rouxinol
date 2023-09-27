#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#define SWAP(var,a,b) {var tmp=a; a=b; b=tmp;}

int main()
{
  string str;
  int n;
  cin >> str >> n;
  string order;
  string buf;
  char c;
  int a,b;
  string p;
  string ShowString[100];
  int count=0;

  for(int i=0;i<n;i++)
    {

      cin >> order >> a >> b;

      if(order=="replace")
	{
	  cin >> p ;
	  
	  str.replace(a,b-a+1,p);
	}
      else if(order=="reverse")
	{
	  /*
	  for(int j=a,k=0;j<(b-a+1)/2;j++,k++)
	    {
	      c=str[j];
	      str[j]=str[b-k];
	      str[b-k]=c;
	      cout << str[j] << str[b-k];
	      }*/
	  // SWAP(char,str[j],str[b-k]);
	  buf=str.substr(a,b-a+1);
	  for(int j=0;j<b-a+1;j++)
	    str[a+j]=buf[b-a-j];
	}
      else if(order=="print")
	{
	  ShowString[count]=str.substr(a,b-a+1);
	  count++;
	}
      else 
	cout << "error \n";
    }

  for(int i=0;i<count;i++)
    cout << ShowString[i] << endl;
 
  return 0;

}
#include<iostream>
#include<string>
#include<stack>
using namespace std;

stack<int> st;
int main()
{
  int a;
  int train[1000];
 
  while(1)
    { cin >>a;
      if(a!=0)
	st.push(a);
      else 
	if (st.empty())
	  break;
	else{
	
	  cout <<st.top()<<"\n";
	  st.pop();}
      
    }
  
return 0;
}
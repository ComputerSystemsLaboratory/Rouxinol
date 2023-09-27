#include<cstdio>
#include<stack>
#include<iostream>
int main()
{
  using namespace std;
  int input;
  stack<int> st;
  while(~scanf("%d",&input))
    {
      if(input == 0)
        {
          cout<<st.top()<<endl;
          st.pop();
        }else
        {
          st.push(input);
        }
    }
  return 0;
}
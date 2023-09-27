#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <cstring>
using namespace std;
const int maxn=2000;
int main()
{ stack<int>q;
string cc;
int sum=0;
//int i=0;
  while(cin>>cc)
  {   //int sum=0;

      if(cc[0]=='+')
    {  int c=q.top(); q.pop();
       int l=q.top(); q.pop();
       sum=c+l;
       //q.pop();q.pop();
        q.push(sum);
    }
      else if(cc[0]=='-')
      {  int c=q.top();
         q.pop();
         int l=q.top();
         q.pop();//q.pop();
         sum=l-c;
        q.push(sum);
      }
      else if(cc[0]=='*')
      {  int  c=q.top();
         q.pop();
         int l=q.top();
         q.pop();
          sum=l*c;
          q.push(sum);
      }
     else
        {//int l=atoi(cc);
             //int l=atoi(cc);
             //printf("%d ** \n",l);
         q.push(atoi(cc.c_str()));

        }

  }
   printf("%d\n",q.top());


    return 0;
}
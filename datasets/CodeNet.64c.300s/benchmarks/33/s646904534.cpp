#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int calculatoin(int a,int b,string mark)
{
  if(mark=="+") return a+b;
  else if(mark=="-") return a-b;
  else if(mark=="*") return a*b;
  else if(mark=="/") return a/b;
  else if(mark=="%") return a%b;
}

int main(int argc,char* argv[])
{
  int a,b,answer;
  string mark;
  while(1)
  {
    cin >> a >> mark >> b;
    if(mark=="?") break;
    answer=calculatoin(a,b,mark);
    cout << answer << endl;
  }
}
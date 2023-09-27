#include<iostream>
using namespace std;
char judge(int,int);
int main()
{
  int m,f,r;
  while(1){
    cin>>m>>f>>r;
    if(m==-1 && f==-1 && r==-1)break;
    if(m==-1 || f==-1)cout<<'F'<<endl;
    else cout<<judge(m+f,r)<<endl;
  }
  return 0;
}

char judge(int s,int r){
  if(s<30)return 'F';
  else if(s<50 && r>=50)return 'C';
  else if(s<50 && r<50)return 'D';
  else if(s<65)return 'C';
  else if(s<80)return 'B';
  else return 'A';
}
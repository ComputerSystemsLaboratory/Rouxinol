#include <iostream>
using namespace std;

int main(void)
{
  int mf,m,f,r,k,i;
  char g[101]={};

  k=0;
  do{
    cin >> m >> f >> r;
    k = k + 1;
    mf = m + f;
    if(mf>=80) g[k]='A';
    if(mf>=65 && mf<80) g[k]='B';
    if(mf>=50 && mf<65) g[k]='C';
    if(mf>=30 && mf<50) {
      g[k]='D';
      if(r>=50) g[k]='C';
    }
    if(mf<30) g[k]='F';
    if(m==-1 ||f==-1) g[k]='F';
  }while(m!=-1||f!=-1||r!=-1);

  for(i=1;i<=k-1;i++)
    cout << g[i] << endl;

  return 0;
}
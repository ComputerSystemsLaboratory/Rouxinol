#include<iostream>
#include<string.h>
using namespace std;

int D[6];
void spin(char c)
{
  if(c=='E'){
    swap(D[0],D[3]);swap(D[3],D[5]);swap(D[5],D[2]);
  }
  else if(c=='W'){
    swap(D[0],D[2]);swap(D[2],D[5]);swap(D[5],D[3]);
  }
  else if(c=='S'){
    swap(D[0],D[1]);swap(D[0],D[4]);swap(D[4],D[5]);
  } 
  else if(c=='N'){
    swap(D[0],D[1]);swap(D[1],D[5]);swap(D[5],D[4]);
  }
}
int main()
{
  char M[101];

  for(int i=0;i<6;i++)cin>>D[i];
  cin>>M;

  for(int i=0;i<strlen(M);i++)spin(M[i]);

  cout<<D[0]<<endl;

  return 0;
}
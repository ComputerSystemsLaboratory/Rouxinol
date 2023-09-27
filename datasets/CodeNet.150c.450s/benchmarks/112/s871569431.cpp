#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
#define inf 32767
using namespace std;

int main(int argc,char* argv[]){
  int n,N,i,j;
  char x;
  char tab[50][2];
  
  while(cin>>n && n){
    for(i=0;i<n;i++){
      for(j=0;j<2;j++){
	while(cin>>x && (x=='\n' || x==' ')){}
	tab[i][j]=x;
      }
    }

    cin>>N;
    for(i=0;i<N;i++){
      while(cin>>x && (x=='\n' || x==' ')){}

      for(j=0;j<n;j++){
	if(x==tab[j][0]){
	  x=tab[j][1];
	  break;
	}
      }
      printf("%c",x);
    }
    cout<<endl;
  }
  return 0;
}
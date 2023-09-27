#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
  int i,j,sum,sumb,n;
  sum=0;
  sumb=0;

  for(i=0;i<4;i++){cin >> n;
  sum+=n;
  }

  for(i=0;i<4;i++){cin >> n;
    sumb+=n;}

  int xmax=0;  
  xmax=max(sum,sumb);

  cout << xmax << endl;




}
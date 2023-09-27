#include<cstdio>
#include<iostream>
using namespace std;


int main(){
  int n,m,i,j;
  char Kim[2][1000000],Jong[1000000];
  for(i=0;i<1000000;i++){
    Jong[i]=0;
    Kim[0][i]=0;
    Kim[1][i]=0;
  }

  while(1){

  cin >> n;
  if(n == 0)break;

  for(i=0;i<n;i++){
    cin >> Kim[0][i];
    cin >> Kim[1][i];
  }

  cin >> m;

  for(i=0;i<m;i++){
    cin >> Jong[i];
  }


  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(Jong[i] == Kim[0][j]){Jong[i]=Kim[1][j];
	break;
    }
      }
  }

  for(i=0;i<m;i++){
    cout << Jong[i];
    }
  cout<< endl;
  }
}
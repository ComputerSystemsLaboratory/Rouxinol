#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int i,j,k;
  int v[1000][3];
  int N;
  int temp;

  cin>>N;
  for(i=0;i<N;i++)
    for(j=0;j<3;j++)
      cin>>v[i][j];

  for(i=0;i<N;i++)
    for(j=0;j<2;j++)
      for(k=0;k<2;k++)
	if(v[i][k] > v[i][k+1]){
	  temp = v[i][k];
	  v[i][k] = v[i][k+1];
	  v[i][k+1] = temp;
	}

  for(i=0;i<N;i++)
    if(pow(v[i][0],2) + pow(v[i][1],2) == pow(v[i][2],2))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

  return 0;

}

      
  
	  
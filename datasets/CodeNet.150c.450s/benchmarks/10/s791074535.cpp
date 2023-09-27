#include <iostream>
using namespace std;

int main()
{
  int n,b,f,r,v;
  int people[5][4][11]={0};
  cin >> n;
  
  for(int i=0;i<n;i++){
    cin >> b >> f >> r >> v;
    people[b][f][r] +=v;
  }
  
  for(int i=1;i<=4;i++){
    for(int j=1;j<=3;j++){
      for(int k=1;k<=10;k++){
	if(people[i][j][k]<0){
	  people[i][j][k]=0;
	}
	if(i!=0 && j!=0 && k!=0){
	  cout << " " << people[i][j][k];
	}
      }
      cout << endl;
    }
    if(i!=4){
      cout << "####################" << endl;
    }
  }
  return 0;
}
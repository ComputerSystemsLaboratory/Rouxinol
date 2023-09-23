#include <iostream>
using namespace std;


int main(){

  int n;
  cin >> n;
  int r[n];
  for(int i=0;i<n;i++)
    cin >> r[i];

  int max= -999999999;
  int minr=r[0];
  for(int i=0;i<n;i++){
    if(r[i]<=minr){
      for(int j=i+1;j<n;j++){
	if(max<r[j]-r[i])
	  max=r[j]-r[i];
      }
      minr=r[i];
    }
  }
  
  cout << max << endl;

}
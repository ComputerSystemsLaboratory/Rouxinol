#include <iostream>
 
using namespace std;
 
int main(){
  int num,tmp;
 
  cin >> num;

  int a[num][3];


  for(int i=0; i<num; ++i)
    cin >> a[i][0] >> a[i][1] >> a[i][2];


  for(int i=0; i<num; ++i){
    
    for(int j=0; j<3; ++j){
      for(int k=j+1; k<3; ++k){
	if(a[i][j] < a[i][k]){
	  tmp = a[i][j];
	  a[i][j] = a[i][k];
	  a[i][k] = tmp;
	}
      }
    }
    
    if(a[i][0]*a[i][0] == a[i][1]*a[i][1] + a[i][2]*a[i][2]){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  }  

}
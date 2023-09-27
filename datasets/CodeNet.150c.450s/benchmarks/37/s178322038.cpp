#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  while(1){
    double A[2][3];
    for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
	cin>>A[i][j];
	if(cin.eof()) return 0;
      }
    }
    for(int i=0;i<2;i++){
      for(int j=i+1;j<3;j++){
	A[i][j] /= A[i][i];
      }
      for(int k=0;k<2;k++){
	if(k!=i){	  
	  for(int j=i+1;j<3;j++) A[k][j] -= A[k][i]*A[i][j];
	}
      }
    }
    cout<<fixed<<setprecision(3)<<A[0][2]<<" "<<A[1][2]<<endl;
  }
  return 0;
}
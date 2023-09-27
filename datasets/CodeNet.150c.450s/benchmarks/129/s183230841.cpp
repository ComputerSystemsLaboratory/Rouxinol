#include<iostream>
using namespace std;
int main(){
  int i,j,k,r,c,b;
  cin >> r >> c;
  int Ur[100]={};
  int Uc[100]={};
  int U=0;
  for(i=0;i<r;i++){
    cin >> b;
    cout << b;
    Ur[i]+=b;
    Uc[0]+=b; 
    for(j=1;j<c;j++){
      cin >> b;
      cout <<" " << b;
      Ur[i]+=b;
      Uc[j]+=b; 
    }
    cout << " " <<Ur[i] << endl;
    U+=Ur[i];
  }
  cout << Uc[0];
  for(j=1;j<c;j++){
    cout << " " << Uc[j];    
  }
  cout << " " << U <<  endl;
}

#include<iostream>
using namespace std;
int main(){

  int n;
  cin >>n;
 
  int *arry = new int[n];

  for(int i=0; i<n; i++){
      cin >> *(arry+i);
  }
  
  for(int i=n-1; i>0; i--){
      cout << *(arry+i) << " ";
  }
  cout << *(arry) << endl;

  delete[] arry;
  return 0;
}
#include <iostream>
using namespace std;
int main(){

  int x[10000],i=0;
  do{
    cin >> x[i];
  }while(x[i++]!=0);

  int k=0;
  while(k<i-1){
    cout << "Case " << k+1 << ": " << x[k] << endl;
    k++;
  }

}
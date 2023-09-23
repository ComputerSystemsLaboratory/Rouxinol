#include<iostream>

using namespace std;
 
int main(){
  int x[10],tmp,i,j;

  for(i=0; i<10; ++i)
    cin >> x[i];

  for(i=0; i<10; ++i){
    for(j=i+1; j<10; ++j){
      if(x[i] < x[j]){
	tmp = x[i];
	x[i] = x[j];
	x[j] = tmp;
      }
    }
  }

  for(i=0; i<3; ++i)
    cout << x[i] << "\n";

    return 0;
}
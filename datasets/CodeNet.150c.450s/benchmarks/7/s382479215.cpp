#include <iostream>
using namespace std;
int main(){
  int data[10],i,j,temp;
  for(i=0;i<10;i++){
    cin >> data[i];
  }
  for(i=0;i<10;i++){
    for(j=1;j<10;j++){
      if(data[j]>data[j-1]){
        temp=data[j];
	data[j]=data[j-1];
	data[j-1]=temp;
      }
    }
  }
  cout << data[0] << endl << data[1] << endl << data[2] << endl;
  return 0;
}
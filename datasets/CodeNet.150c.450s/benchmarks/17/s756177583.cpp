#include<iostream>

using namespace std;

int main(){
  int list[5], i, j, temp;
  cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4];
  for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){
      if(list[i] <= list[j]){
	temp = list[i];
	list[i] = list[j];
	list[j] = temp;
      }
    }
  }
  for(i=0; i<4; i++)cout << list[i] << " ";
  cout << list[4] << endl;
}
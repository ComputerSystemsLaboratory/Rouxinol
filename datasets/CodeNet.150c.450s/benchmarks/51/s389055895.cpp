#include<iostream>
using namespace std;
int main(){
  int n[28];
  int cn[30];
  for(int j=0;j<28;j++){
    cin >> n[j];
  }
  for(int i=0;i<30;i++){
    cn[i] = i+1;
    cin >> cn[i];
  }
  for(int i=0;i<30;i++){
    for(int j=0;j<28;j++){
      if(cn[i]==n[j]){
	cn[i] = 0;
      }
    }
  }
  for(int i=0;i<30;i++){
	if(cn[i]>0){
	  cout << cn[i] << endl;
	}
  }
  return 0;
}
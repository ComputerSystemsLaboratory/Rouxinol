#include <iostream>
#include <algorithm>
using namespace std;

int main(){

  while(1){
    int card,x;
    cin >> card >> x;
    if(card==0 && x == 0) break;
    int p[100];
    for(int i = 1; i <= card;i++){
      p[card-i+1] = i;
    } 
    for(int i = 1;i <= card;i++){
      //   cout << p[i] << endl;
    }
    for(int i = 0; i < x;i++){
      int a,b;
      cin >> a >> b;
      int tmp[200]={};
      for(int j = 1 ; j < a ; j++){
	tmp[j]= p[j];
      } 
      for(int j = 1; j <= b; j++){
	p[j] = p[a+j-1];
      }
      for(int j = b+1; j <= a+b-1; j++){
	p[j] = tmp[j-b];
      }
    }
    for(int i = 1;i <= card;i++){
      //  cout << p[i] << endl;
    }
    cout << p[1] << endl;

  }
  return 0;
}
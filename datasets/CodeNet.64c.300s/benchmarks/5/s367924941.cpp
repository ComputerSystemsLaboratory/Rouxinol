#include<iostream>
using namespace std;
   
int main(void){
   
  int h[10];
  int a = 0;
   

    for(int i=0; i<10; i++){
      cin >> h[i]; 
    }
   
  for(int j=0; j<3; j++){
    for(int i=0; i<10; i++){
        if(h[a]<h[i]) a = i;
    }
    cout << h[a] << endl; 
    h[a] = 0;
  }  
   
  return 0;
}
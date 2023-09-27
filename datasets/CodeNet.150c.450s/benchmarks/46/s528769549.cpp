#include <iostream>
using namespace std;

int main(){
  int com[1000][2];
  int n,x;
  int count = 0;
  int i = 0;
  while(1){
    cin >> com[i][0] >> com[i][1];
    if(com[i][0] == 0 && com[i][1] == 0){ 
      break;
    }   
    i++;
  }

  for(int g = 0;g < i;g++){
count = 0;
    n = com[g][0];
    x = com[g][1];
    for(int a = 1;a <= n;a++){
      for(int b = a+1; b <= n;b++){
        for(int c = b+1;c <= n;c++){
          if(a+b+c==x){
            count+=1;
          }   
        }   
      }   
    }   
    cout << count << endl;
  }
}
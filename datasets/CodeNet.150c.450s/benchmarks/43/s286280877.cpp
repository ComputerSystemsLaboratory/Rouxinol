#include<iostream>

using namespace std;

int main(){

  int n;
  while(cin >> n){
    if(n == 0) break;
    
    int suma = 0, sumb = 0;
  
    for(int i = 0; i < n; i++){
      int a, b;
      cin >> a >> b;
      if(a > b) suma+=a+b;
      else if(a < b) sumb+=a+b;
      else {
	suma+=a;
	sumb+=b;
      }
    }
    
    cout << suma << " " <<sumb << endl;
  }

  return 0;
}
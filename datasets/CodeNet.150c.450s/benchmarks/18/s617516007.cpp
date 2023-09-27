#include<iostream>
#include<cmath>

#define N 100000

using namespace std;

int main(void){
long int debt = 0;

  int n;
  cin >> n;
  int money = N;
  
  for(int i = 0;i < n;i++){
  	
  	if(((money *= 1.05) % 1000) != 0){
  		money += 1000 - (money % 1000);
  	}
  	
  }
  cout << money << endl;


  return 0;
}
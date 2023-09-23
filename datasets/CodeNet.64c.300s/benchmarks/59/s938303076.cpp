#include<iostream>
#include<cmath>

int isprime(int);
using namespace std;

int main(){
  int i,j,n,b=0;

  cin >> n;

  int a[n];
  
  for(i = 0; i < n; i++)
    cin >> a[i];

    
  for(i = 0; i < n; i++){
    if(isprime(a[i]) == true) b++;
  }
  
  cout << b << endl;

  return 0;
}
  
int isprime(int x){
  int j;
  
  if(x == 2)
    return true;
      
    if(x < 2 || x%2 == 0)
      return false;

    j = 3;

    while(j <= sqrt(x)){
      if(x%j == 0){
	return false;
      }
      
	j = j+2;
	
    }
    
    return true;
}
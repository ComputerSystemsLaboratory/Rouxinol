#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int x){
 if(x==2) return true;

 if(x<2 || x%2==0) return false;

 int i = 3;
 while(i<=sqrt(x)){
  if(x%i==0) return false;
  i = i + 2;
 }

 return true;
}

int main(){
 int n;
 cin >> n;
 int N[n];
 for(int i=0; i<n; i++){
  cin >> N[i];
 }

 int count = 0;
 for(int i=0; i<n; i++){
  if(isPrime(N[i])) count++;
 }

 cout << count << endl;

 return 0;
}
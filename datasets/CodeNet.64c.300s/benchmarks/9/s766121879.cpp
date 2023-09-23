#include<iostream>

using namespace std;

int main(){
  int n;
  cin >>n;
  int a = 100000;
  for (int i= 0; i<n; i++){
    a = a*1.05;
    if(a%1000 >0) a= a-a%1000+ 1000;
  }
  cout << a <<endl;
}
  
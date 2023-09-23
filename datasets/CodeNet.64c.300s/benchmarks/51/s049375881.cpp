#include<iostream>
using namespace std;

int main(){
  int n;
 long long int s=1;
  cin >> n;
  for(int i=0;n-i > 0;i++)
    s=s*(n-i);
  cout << s <<endl;
}
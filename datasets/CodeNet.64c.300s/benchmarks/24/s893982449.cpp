#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  while(cin >> n){
    if(n==0)break;

    int A = 0, B = 0, a, b;
    for(int i=0;i<n;i++){
      cin >> a >> b;
      if(a > b) A += a+b;
      else if(a < b) B += a+b;
      else A += a, B += b;
    }

    cout << A << " " << B << endl;
  }
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long int res=1;
  while(n!=1){
    res *= n;
    n--;
  }
  cout << res << endl;
}


  
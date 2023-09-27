#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> vc;
  int n;

  while(cin >> n){
    if(n != 0){
    	vc.push_back(n);
    }
    else{
      cout << vc.back() << endl;
    	vc.pop_back();
    }
  }
  
  return 0;
}
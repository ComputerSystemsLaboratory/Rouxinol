#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n;
  vector<int> Stop, Free;

  while(cin >> n){
    if(n == 0){
      n = Stop[Stop.size()-1];
      Stop.pop_back();
      Free.push_back(n);
    }else{
      Stop.push_back(n);
    }
  }

  for(vector<int>::size_type i=0; i != Free.size(); ++i){
    cout << Free[i] << endl;
  }

  return 0;
}
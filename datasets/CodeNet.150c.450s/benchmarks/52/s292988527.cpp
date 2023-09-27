#include<iostream>
#include<vector>

using namespace std;

int main(){

  vector<int> V;
  int in;
  while(cin >> in){
    if(in != 0) V.push_back(in);
    else{
      cout <<  V.back() << endl;
      V.pop_back();
    }
  }
  return 0;
}
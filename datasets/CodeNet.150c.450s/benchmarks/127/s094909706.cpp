#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string input;
  string ans;
  int n;
  set<string> train;
  string left, right;

  cin >> n;
  for(int k=0; k<n; k++){
    train.clear();
    cin >> input;
    for(int i=1; i<=input.length()-1; i++){
      left = input.substr(0, i);
      right = input.substr(i, input.length()-1);
   
      train.insert(left+right);//ss
      train.insert(right+left);
     
      reverse(right.begin(), right.end());
      train.insert(left+right);//sr
      train.insert(right+left);
      
      reverse(left.begin(), left.end());
      train.insert(left+right);//rr
      train.insert(right+left);

      reverse(right.begin(), right.end());
      train.insert(left+right);//rs
      train.insert(right+left);
    }
    cout << train.size() << endl;
  }
  return 0;
}
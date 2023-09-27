#include<iostream>
#include<string>
using namespace std;

int main(){
  string ss;
  cin >> ss;
  for(int i = ss.length()-1; i>=0; i--){
    cout <<ss[i];
  } cout << endl;
}
  
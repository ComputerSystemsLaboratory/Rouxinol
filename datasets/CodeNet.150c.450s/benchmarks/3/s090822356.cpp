#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
  string str;
  vector<string> out;
  int N;
  cin >> str >> N;
  for(int i=0;i<N;i++){
    int a, b;
    string instr, p;
    cin >> instr;
    if(instr == "print"){
      cin >> a >> b;
      out.push_back(str.substr(a, b-a+1));
    }else if(instr == "reverse"){
      cin >> a >> b;
      for(int i=0;i<=(b-a)/2;i++){
        swap(str[a+i], str[b-i]);
      }
    }else{
      cin >> a >> b >> p;
      str.replace(a, b-a+1, p);
    }
  }

  for(int i=0;i<out.size();i++){
    cout << out[i] << endl;
  }
  return 0;
}
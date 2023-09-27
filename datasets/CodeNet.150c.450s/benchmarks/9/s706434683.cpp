//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_B
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string frst;

//string shuffle(string input, int sh){
void shuffle(int sh){
//  string shu = input.substr(input.begin(), input.begin()+sh-1);
  //string shu = input.substr(0, sh);
  string shu = frst.substr(0, sh);
  //cout << shu << endl;
  //input.erase(input.begin(), input.begin()+sh-1);
  frst.erase(0, sh);
  //cout << input << endl;
  frst = frst + shu;
  //cout << input << endl;
  //return input;
}

int main(){
//  string frst;
  int n,sh;
  while(cin >> frst >> n){
    if(frst == "-") break;
    else{
      for(int i = 0; i<n; i++){
        cin >> sh;
//        shuffle(frst, sh);
        shuffle(sh);
      }
    }
    cout << frst << endl;
  }
}
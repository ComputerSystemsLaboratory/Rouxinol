#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>


using namespace std;


int main(){
  string str;
  while(cin >> str){
    //    cout << str << endl;
    string strtmp;
    for(int i=0;i<str.size();i++){
      strtmp.push_back(str[str.size()-1-i]);
    }
    cout << strtmp << endl;
  }

} 
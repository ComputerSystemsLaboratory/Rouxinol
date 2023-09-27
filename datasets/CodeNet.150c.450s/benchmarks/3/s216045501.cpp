#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>

using namespace std;
int main(){

  string str;
  int n;
  cin >> str >> n;

  for(int i=0;i<n;i++){
    string cmd;
    cin >> cmd;

    if(cmd.compare("print") == 0){
      int a,b;
      cin >> a >> b;
      for(int j=a;j<=b;j++){
        cout << str[j];
      }
      cout << endl;
    }else if(cmd.compare("reverse") == 0){
      int a,b;
      cin >> a >> b;
      string tmp = str.substr(a,(b-a+1));
      for(int j=0,l=tmp.size();j<l;j++){
        str[j+a] = tmp[(l-1)-j];
      }
    }else if(cmd.compare("replace" ) == 0) {
      int a,b;
      cin >> a >> b;
      string p;
      cin >> p;
      for(int j=0;j<p.size();j++){
        str[j+a] = p[j];
      }
    }
  }


}




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

  while(true){
    getline(cin , str); 

    if(str.size()==1 && ((int)str[0] - 48) == 0 ) break;

    int sum = 0;
    for(int i=0;i<str.size();i++){
      sum += (int)str[i] - 48;
    }
    cout << sum << endl;
  }

}

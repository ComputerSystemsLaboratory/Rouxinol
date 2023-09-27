#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>

using namespace std;
int main(){

  while(true){
    string str;
    int m=0;
    int sum=0;

    cin >> str;
    if(str.compare("-") == 0) break;
    cin >> m;

    for(int i=0;i<m;i++){
      int tmp;
      cin >> tmp;
      sum +=tmp;
    }

    sum = sum % str.size();

    int idx=sum;
    for(int i=0;i<str.size();i++,idx++){
      if(idx >= str.size()) idx = 0;
      cout << str[idx];
    }
    cout << endl;

  }

}

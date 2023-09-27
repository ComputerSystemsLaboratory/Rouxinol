#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>

using namespace std;
int main(){

  int n;
  cin >> n;

  int taro_sum=0,hana_sum=0;

  for(int i=0;i<n;i++){
    string taro,hana;

    cin >> taro >> hana;

    int mini =  min(taro.size(),hana.size());

    bool eq = true;
    for(int j=0;j<mini;j++){
      if((int)taro[j] > (int)hana[j]){
        taro_sum += 3;
        eq = false;
        break;
      }else if((int)taro[j] < (int)hana[j]){
        hana_sum+=3;
        eq = false;
        break;
      }
    }
    if(eq == true){
      if(taro.size() < hana.size()){
        hana_sum+=3;
      }else if(taro.size() > hana.size()){
        taro_sum += 3;
      }else{
        taro_sum += 1;
        hana_sum += 1;
      }

    }
  }
  cout << taro_sum << " " << hana_sum << endl;
}

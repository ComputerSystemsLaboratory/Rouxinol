#include<iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
  int taro, hanako, n;
  string t_card, h_card;

  taro = 0;
  hanako = 0;

  cin >> n;

  while(n--){
    cin >> t_card >> h_card;
    if(t_card > h_card) taro += 3;
    else if(t_card < h_card) hanako += 3;
    else{
      taro++;
      hanako++;
    }
  }
  cout << taro << " " << hanako << endl;

  return 0;
}
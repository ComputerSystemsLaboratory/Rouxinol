#include<iostream>
#include<string>
using namespace std;

int main(){
  int n,i,score_taro = 0,score_hana = 0;
  string str_taro, str_hana;

  cin >> n;
  for(i = 0; i < n;i++){
    cin >> str_taro >> str_hana;
    if(str_taro > str_hana)      score_taro += 3;
    else if(str_taro < str_hana) score_hana += 3;
    else{
      score_taro += 1; score_hana += 1;
    }
  }
  cout << score_taro << " " << score_hana << endl;
  return 0;
}
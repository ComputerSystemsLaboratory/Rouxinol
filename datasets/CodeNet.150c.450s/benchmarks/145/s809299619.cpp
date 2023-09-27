
// mapはキー／値の対を保持する理想コンテナ
// 連想配列

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(void){

  string s;
  map< string , int > count; // キーがstring型、値がintのmap
  string num;
  string len;

  while( cin >> s ){
    int c = ++count[s];                    //初期化は必要なし？  
    if( c > count[num] ) num = s;          //ここで単語
    if( s.size() > len.size() ) len = s;   //ここで文字数
  }
  cout << num << " " << len << endl;
  return 0;
}
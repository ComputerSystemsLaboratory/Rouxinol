//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_C
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int p_taro=0, p_hanako=0;

int dictionary(string taro, string hanako){
  //taro??????????????°2
  //hanako??????????????°1
  //??????????????????0
  if(taro == hanako) return 0;
  else{
  vector<string> dic;
  dic.push_back(taro);
  dic.push_back(hanako);
  sort(dic.begin(), dic.end());
  if(dic[0] == hanako) return 2;
  else return 1;
  }
}




void match(string taro, string hanako){
  if(dictionary(taro,hanako) == 2){ p_taro += 3;}
  if(dictionary(taro,hanako) == 1){ p_hanako += 3;}
  if(dictionary(taro,hanako) == 0) {p_taro += 1; p_hanako += 1;}
}

int main(){
  int n;
  cin >> n;
  string taro, hanako;
  for(int i = 0; i<n; i++){
    cin >> taro >> hanako;
    match(taro, hanako);
  }
  cout << p_taro << " " << p_hanako << endl;
}
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<climits>
#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<string>
#include<queue>
#include<map>
#include<set>
#include<utility>
#include<queue>

using namespace std;

char moji(char x,int n){
  //x を nかい押したときに入力された時の文字
  if(x == '1'){
    switch ((n-1)%5){
    case 0:return '.';
    case 1:return ',';
    case 2:return '!';
    case 3:return '?';
    case 4:return ' ';
    }
  }
  if(x == '2')return 'a' + (n-1)%3;
  if(x == '3')return 'd' + (n-1)%3;
  if(x == '4')return 'g' + (n-1)%3;
  if(x == '5')return 'j' + (n-1)%3;
  if(x == '6')return 'm' + (n-1)%3;
  if(x == '7')return 'p' + (n-1)%4;
  if(x == '8')return 't' + (n-1)%3;
  if(x == '9')return 'w' + (n-1)%4;
  cout<< "error:" << x << ','<< n << endl;
  return -1;
}

string solve(const string &input){
  string output = "";
  int prev = input[0];//直前の入力
  int count = 0;//連続して入力された回数

  for(size_t i = 0;i < input.size();i++){
    const char &cur = input[i];

    if(cur == '0'){
      if(prev != '0')
	output.append(1, moji(prev,count));
      if(i < input.size()-1)prev = input[i+1];
      count = 0;
    }else if(cur == prev){
      //
      count++;
    }else{
      //入力が直前と異なる
      prev = cur;
      output.append(1, moji(cur,count));
      count = 0;
    }
  }
  return output;
}


int main(){
  ios::sync_with_stdio(false);
  int x;
  cin >> x; 
  for(int i = 0;i < x; ++i){
    string input;
    cin.ignore();
    cin >> input;
    //cin.ignore();
    cout << solve(input) << endl;
  }

  return 0;
}
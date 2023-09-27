#include<bits/stdc++.h>
using namespace std;
/* 変数名を被らせない
   デバッグコードを取り除く 
　　提出する問題を間違えない */
#define ANSWER(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
int main(){
  stack<int> train;
  int a;
  while(1){
    cin >> a;
    if(a){
      train.push(a);
    }else{
      if(cin.eof())break;
      cout << train.top() << endl;
      train.pop();
    }
  }
}
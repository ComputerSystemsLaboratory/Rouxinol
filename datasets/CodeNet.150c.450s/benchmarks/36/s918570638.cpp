#include<bits/stdc++.h>
using namespace std;
/* 変数名を被らせない
   デバッグコードを取り除く 
　　提出する問題を間違えない */
#define ANS(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
int main(){
  int d,s;
  while(1){
    s = 0;
    cin >> d;
    if(cin.eof())break;
    for(int i=1;i<=600/d-1;i++){
      s += (d*i)*(d*i)*d;
    }
    ANS(s);
  }
}
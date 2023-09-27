#include<bits/stdc++.h>//本当は必要なヘッダファイルだけインクルードするべきです
using namespace std;//本当は個別にusingするか変数や関数ごとにstd::をつけるべきです
//本当は関数内に宣言し明示的に初期化するべきです
int m,f,r;
int main(void){
  while(cin>>m>>f>>r){
    if(m==-1&&f==-1&&r==-1)break;
    if(m==-1||f==-1)cout<<'F'<<endl;
    else if(m+f>=80)cout<<'A'<<endl;
    else if(m+f>=65)cout<<'B'<<endl;
    else if(m+f>=50)cout<<'C'<<endl;
    else if(m+f>=30&&r>=50)cout<<'C'<<endl;
    else if(m+f>=30&&r<50)cout<<'D'<<endl;
    else cout<<'F'<<endl;
  }
  return 0;
}


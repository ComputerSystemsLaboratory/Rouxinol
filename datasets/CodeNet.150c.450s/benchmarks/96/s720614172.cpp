#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  for(int w=0;w<n;w++){
  string s;
  cin >> s;
  char flag;
  char c,ans;
  int p =0;
  for(int i=0;i<s.size();i++){
    c = s[i]-'0';
    if(c==0&&flag!=0){
       p = 0;
       cout << ans;
     }
    if(c==1){
      if(p%5==0) ans = '.';
      if(p%5==1) ans = ',';
      if(p%5==2) ans = '!';
      if(p%5==3) ans = '?';
      if(p%5==4) ans = ' ';
      p++;
    }
    if(c==2){
      if(p%3==0) ans = 'a';
      if(p%3==1) ans = 'b';
      if(p%3==2) ans = 'c';
      p++;
    }
    if(c==3){
      if(p%3==0) ans = 'd';
      if(p%3==1) ans = 'e';
      if(p%3==2) ans = 'f';
      p++;
    }
    if(c==4){
      if(p%3==0) ans = 'g';
      if(p%3==1) ans = 'h';
      if(p%3==2) ans = 'i';
      p++;
    }
    if(c==5){
      if(p%3==0) ans = 'j';
      if(p%3==1) ans = 'k';
      if(p%3==2) ans = 'l';
      p++;
    }
    if(c==6){
      if(p%3==0) ans = 'm';
      if(p%3==1) ans = 'n';
      if(p%3==2) ans = 'o';
      p++;
    }
    if(c==7){
      if(p%4==0) ans = 'p';
      if(p%4==1) ans = 'q';
      if(p%4==2) ans = 'r';
      if(p%4==3) ans = 's';
      p++;
    }
    if(c==8){
      if(p%3==0) ans = 't';
      if(p%3==1) ans = 'u';
      if(p%3==2) ans = 'v';
      p++;
    }
    if(c==9){
      if(p%4==0) ans = 'w';
      if(p%4==1) ans = 'x';
      if(p%4==2) ans = 'y';
      if(p%4==3) ans = 'z';
      p++;
    }
    flag = c;
  }
  cout << endl;
}
}


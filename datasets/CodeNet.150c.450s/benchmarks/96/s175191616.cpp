#include <iostream>

using namespace std;

int check(int num,char c){
  if(c == '1')return num%5;
  if(c == '7' || c == '9')return num%4;
  else return num%3;
}

int main(){
  int n,i,j;
  string s;
  char b[10][5];
  char c = 'a';
  b[1][0]='.';
  b[1][1]=',';
  b[1][2]='!';
  b[1][3]='?';
  b[1][4]=' ';
  for(i=2;i<10;i++){
    for(j=0;j<3;j++){
      b[i][j]=c;
      c++;
    }
    if(i==7 || i==9){
      b[i][3]=c;
      c++;
    }
  }
  cin >> n;
  for(i=0;i<n;i++){
    cin >> s;
    j=0;
    while(j<s.size()){
      c = s[j];
      if(c=='0'){
        j++;
        continue;
      }
      int num=0;
      j++;
      while(s[j]==c){
        num++;
        j++;
      }
      num = check(num,c);
      cout << b[c-'0'][num];
    }
    cout << endl;
  }
  return 0;
}


#include<iostream>
#include<cstdio>

using namespace std;

int CHARtoINT(char ch[]){
  int j;
  int cur=0;

  for(j=0;ch[j];j++){
    if(ch[j]=='m'){
      if(j==0){
        cur+=1000;
      }else{
        cur+=(ch[0]-'0')*1000;
      }
    }else if(ch[j]=='c'){
      if(j==0){
        cur+=100;
      }else if('2'<=ch[j-1] && ch[j-1]<='9'){
        cur+=(ch[j-1]-'0')*100;
      }else{
        cur+=100;
      }
    }else if(ch[j]=='x'){
      if(j==0){
        cur+=10;
      }else if('2'<=ch[j-1] && ch[j-1]<='9'){
        cur+=(ch[j-1]-'0')*10;
      }else{
        cur+=10;
      }
    }else if(ch[j]=='i'){
      if(j==0){
        cur++;
      }else if('2'<=ch[j-1] && ch[j-1]<='9'){
        cur+=(ch[j-1]-'0');
      }else{
        cur++;
      }
    }
  }

  return cur;
}

void printCHAR(int num){
  char ans[10];

  if(num>=2000){ cout << num/1000; }
  if(num>=1000){ cout << "m"; }
  num%=1000;
  if(num>=200){ cout << num/100; }
  if(num>=100){ cout << "c"; }
  num%=100;
  if(num>=20){ cout << num/10; }
  if(num>=10){ cout << "x"; }
  num%=10;
  if(num>=2){ cout << num; }
  if(num>=1){ cout << "i"; }

  cout << endl;

  return ;
}

int main(void) {
  int i,j;
  int n;
  int num1,num2;
  char s1[10],s2[10];

  cin >> n;

  for(i=0;i<n;i++){
    cin >> s1 >> s2;
    
    num1=CHARtoINT(s1);
    num2=CHARtoINT(s2);

    printCHAR(num1+num2);
  }

  return 0;
}
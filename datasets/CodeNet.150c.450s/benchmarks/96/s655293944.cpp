#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

void b(int a,int count){
  if(a == 1){
    if(count%5==1) cout <<".";
    else if(count%5==2) cout <<",";
    else if(count%5==3) cout <<"!";
    else if(count%5==4) cout <<"?";
    else if(count%5==0) cout <<" ";

  }
  else if(a == 2){
    if(count%3==1) cout <<"a";
    else if(count%3==2) cout <<"b";
    else if(count%3==0) cout <<"c";
  }
  else if(a == 3){
    if(count%3==1) cout <<"d";
    else if(count%3==2) cout <<"e";
    else if(count%3==0) cout <<"f";
  }
  else if(a == 4){
    if(count%3==1) cout <<"g";
    else if(count%3==2) cout <<"h";
    else if(count%3==0) cout <<"i";
  }
  else if(a == 5){
    if(count%3==1) cout <<"j";
    else if(count%3==2) cout <<"k";
    else if(count%3==0) cout <<"l";
  }
  else if(a == 6){
    if(count%3==1) cout <<"m";
    else if(count%3==2) cout <<"n";
    else if(count%3==0) cout <<"o";
  }
  else if(a == 7){
    if(count%4==1) cout <<"p";
    else if(count%4==2) cout <<"q";
    else if(count%4==3) cout <<"r";
    else if(count%4==0) cout <<"s";
  }
  else if(a == 8){
    if(count%3==1) cout <<"t";
    else if(count%3==2) cout <<"u";
    else if(count%3==0) cout <<"v";
  }
  else if(a == 9){
    if(count%4==1) cout <<"w";
    else if(count%4==2) cout <<"x";
    else if(count%4==3) cout <<"y";
    else if(count%4==0) cout <<"z";
  }
  return;
}


int main(){

  int n;
  cin >> n;

  rep(i,0,n){
    string s;
    cin >> s;

    char pre[] = "0\0";
    pre[0]=s[0];
    int count = 0;
    rep(i,0,s.size()){

      if(pre[0] == s[i]){
	count++;
      }
      else{
	int bo = atoi(pre);
	b(bo,count);
	count=1;
	pre[0]=s[i];
      }
    }
    cout << endl;
  }
  return 0;
}
#include <iostream>
#include <string>
using namespace std;

#define Rep(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)

void b(int a,int count);

int main(){
  int n;
  cin >> n;
  Rep(i,n){
    string s;
    cin >> s;

    int d=1;
    string pre = s.substr(0,1);
    rep(j,1,s.size()){
      if(pre == s.substr(j,1) ) d++;
      else{
	int num = stoi(pre);
	b(num,d);
	pre = s.substr(j,1);
	d=1; 
      }
    }
    cout << endl;
  }
}

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
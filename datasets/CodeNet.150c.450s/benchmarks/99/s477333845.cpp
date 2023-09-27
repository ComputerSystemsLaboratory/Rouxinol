#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    int ans = 0;
    string s;
    for(int c=0; c<2; c++){
      cin >>s;
      for(int i=0,x=1; i<s.size(); i++){
	if(s[i] == 'm'){ans+=x*1000;x = 1;}
	else if(s[i] == 'c'){ans+=x*100;x = 1;}
	else if(s[i] == 'x'){ans+=x*10;x = 1;}
	else if(s[i] == 'i'){ans+=x;x = 1;}
	else x = s[i]-'0';
      }
    }
    if(ans>=2000) cout <<ans/1000;
    if(ans>=1000){cout <<"m";ans%=1000;}
    if(ans>=200) cout <<ans/100;
    if(ans>=100){cout <<"c";ans%=100;}
    if(ans>=20) cout <<ans/10;
    if(ans>=10){cout <<"x";ans%=10;}
    if(ans>=2) cout <<ans;
    if(ans>=1) cout <<"i";
    cout <<endl;
  }
  return 0;
}
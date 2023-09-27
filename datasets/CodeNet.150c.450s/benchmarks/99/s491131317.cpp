#include <bits/stdc++.h>
using namespace std;

char ch[4] = {'m','c','x','i'};
int num[4] = {1000,100,10,1};
int ans;
string mcxi;

void math(char wo, int n){

  for(int i = 0; i < 4; i++){
    if(wo == ch[i]){
      ans += num[i] * n;
    }
  }
}

void cg(int p){

  for(int i = 0; i < 4; i++){
    if(p / num[i] == 0) continue;
    else if(p / num[i] == 1){
      mcxi += ch[i];
      p -= num[i];
    }else {
      mcxi += ((p/num[i])+'0');
      mcxi += ch[i];
      p -= num[i] * (p/num[i]);
    }
  }
}

int main(){

  int n;
  string a, b;
  int judge = 0;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> a >> b;
    mcxi="";
    for(int t = 0; t < (int)a.size(); t++){
      for(int s = 2; s <= 9; s++){
	if(a[t]-'0' == s){
	  math(a[t+1],s);
	  t++;
	  judge = 1;
	}
      }
      if(judge == 0){
	math(a[t],1);
      }
      judge = 0;
    }
    for(int t = 0; t < (int)b.size(); t++){
      for(int s = 2; s <= 9; s++){
	if(b[t]-'0' == s){
	  math(b[t+1],s);
	  t++;
	  judge = 1;
	}
      }
      if(judge == 0){
	math(b[t],1);
      }
      judge = 0;
    }
    cg(ans);
    cout << mcxi << endl;
    ans = 0;
    mcxi.clear();
  }
}
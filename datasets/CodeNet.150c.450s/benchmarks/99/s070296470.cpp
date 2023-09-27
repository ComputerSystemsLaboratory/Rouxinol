#include<iostream>
#include<vector>
#include<map>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<cctype>
#include<string>
using namespace std;
typedef pair<int,int> P;
int solve(string);
int main(){
  int n,ans;
  string s1,s2,ANS;
  cin >> n;
  while(n--){
    cin >> s1 >> s2;
    ans = solve(s1) + solve(s2);
    char HM[10];
    sprintf(HM,"%4d",ans);
    string aa,tmp="mcxi";
    for(int i=0;i<4;i++){
      if(HM[i]>'1') aa += HM[i];
      if(HM[i]>'0') aa += tmp[i];
    }
	
    cout << aa << endl;
  }
}
int solve(string str){
  int cnt = 1,ans = 0;
  for(int i=0;i<str.size();i++){
    if(isdigit(str[i])){
      cnt = str[i]-'0';
      continue;
    }
    if(str[i] == 'm')ans += cnt * 1000;
    else if(str[i] == 'c') ans += cnt * 100;
    else if(str[i] == 'x') ans += cnt * 10;
    else if(str[i] == 'i')ans += cnt;
    cnt = 1;
  }
  return ans;
}
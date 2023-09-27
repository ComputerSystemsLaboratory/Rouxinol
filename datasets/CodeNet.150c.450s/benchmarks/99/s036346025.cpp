#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int I, X, C, M;

void prefix(char x){
  if(x == 'i') I += 1;
  if(x == 'x') X += 10;
  if(x == 'c') C += 100;
  if(x == 'm') M += 1000;
}

int main(){
  int cs, n1, n2;
  string s1, s2, ans;
  cin >> cs;
  while(cs--){
    n1 = 0, n2 = 0;
    cin >> s1 >> s2;
    
    for(int i = s1.size()-1 ; i >= 0 ; i--){
      if(!isdigit(s1[i])) prefix(s1[i]);
      else if(s1[i+1] == 'i') I *= (s1[i]-'0');
      else if(s1[i+1] == 'x') X *= (s1[i]-'0');
      else if(s1[i+1] == 'c') C *= (s1[i]-'0');
      else if(s1[i+1] == 'm') M *= (s1[i]-'0');    
    }
    
    n1 = I + X + C + M;
    I = 0, X = 0, C = 0, M = 0;
    
    for(int i = s2.size()-1 ; i >= 0 ; i--){
      if(!isdigit(s2[i])) prefix(s2[i]);
      else if(s2[i+1] == 'i') I *= (s2[i]-'0');
      else if(s2[i+1] == 'x') X *= (s2[i]-'0');
      else if(s2[i+1] == 'c') C *= (s2[i]-'0');
      else if(s2[i+1] == 'm') M *= (s2[i]-'0');    
    }
    
    n2 = I + X + C + M;
    I = 0, X = 0, C = 0, M = 0;
    
    int sum;
    sum = n1 + n2;
    ans = "";
    
    if(sum >= 1000){
      if(sum / 1000 != 1) ans += (sum / 1000)+'0';
      ans += 'm';
      sum -= (sum / 1000) * 1000;
    }
    if(sum >= 100){
      if(sum / 100 != 1) ans += (sum / 100)+'0';
      ans += 'c';
      sum -= (sum / 100) * 100;
    }
   if(sum >= 10){
      if(sum / 10 != 1) ans += (sum / 10)+'0';
      ans += 'x';
      sum -= (sum / 10) * 10;
    }
   if(sum >= 1){
      if(sum != 1) ans += sum+'0';
      ans += 'i';
   } 
   cout << ans << endl;
  }
  return 0;
}
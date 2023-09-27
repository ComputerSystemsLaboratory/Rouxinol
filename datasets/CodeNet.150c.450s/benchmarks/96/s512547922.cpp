#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  char key[9][5]={
    {'.',',','!','?',' '},
    {'a','b','c',' ',' '},
    {'d','e','f',' ',' '},
    {'g','h','i',' ',' '},
    {'j','k','l',' ',' '},
    {'m','n','o',' ',' '},
    {'p','q','r','s',' '},
    {'t','u','v',' ',' '},
    {'w','x','y','z',' '}
  };
  int n;
  cin >> n;
  string s;
  for(int i=0;i<n;i++){
    string ans="";
    int a=0,b=0;
    cin >> s;
    for(int j=0;j<s.length();j++){
      if(s[j]=='0'){
        if(a){
          ans+=key[a-1][b];
          a=0;
          b=0;
        }
      }else{
        if(a){
          b++;
          if(a==1) b%=5;
          else if(a==7||a==9) b%=4;
          else b%=3;
        }else{
          a=s[j]-'0';
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}


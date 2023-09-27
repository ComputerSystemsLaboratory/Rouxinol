#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<((int)(n));i++)
#define reg(i,a,b) for(int i=((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=((int)(b));i>=((int)(a));i--)
typedef long long int lli;
typedef pair<int,int> mp;

int main(){
  int n;
  scanf("%d",&n);
  char s[2000];
  rep(i,n){
    scanf("%s",s);
    int len = strlen(s);
    char now = 0;
    rep(j,len){
      if(!now && s[j]=='0') continue;
      else if(s[j]=='0') {putchar(now); now = 0;}
      else if(s[j]=='1'){
        if(now=='.') now = ',';
        else if(now==',') now = '!';
        else if(now=='!') now = '?';
        else if(now=='?') now = ' ';
        else if(now==' ' || now==0) now = '.';
      }
      else if(s[j]=='2'){ if(now==99 || !now) now = 97; else now++;}
      else if(s[j]=='3'){ if(now==102 || !now) now = 100; else now++;}
      else if(s[j]=='4'){ if(now==105 || !now) now = 103; else now++;}
      else if(s[j]=='5'){ if(now==108 || !now) now = 106; else now++;}
      else if(s[j]=='6'){ if(now==111 || !now) now = 109; else now++;}
      else if(s[j]=='7'){ if(now==115 || !now) now = 112; else now++;}
      else if(s[j]=='8'){ if(now==118 || !now) now = 116; else now++;}
      else if(s[j]=='9'){ if(now==122 || !now) now = 119; else now++;}
    }
    putchar('\n');
  }


  return 0;

}
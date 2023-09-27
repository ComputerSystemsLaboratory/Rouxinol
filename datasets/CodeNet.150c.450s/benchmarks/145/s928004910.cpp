#include<iostream>
#include<map>
#include<cstring>
#include<algorithm>

using namespace std;

int main(void){
  char s[1001][33];
  map<string,int>wd;
  int i=0;

  while(~scanf("%s",&s[i][0])){i++;}

  for(int j=0;j<i;j++)
    wd[s[j]]=0;

  for(int j=0;j<i;j++)
    wd[s[j]]++;

  int ans=0,len=0;
  for(int j=0;j<i;j++){
    ans=max(wd[s[j]],ans);
    len=max(len,(int)strlen(&s[j][0]));
  }

  string s1,s2;
  for(int j=0;j<i;j++){
    if(ans==wd[s[j]])s1=s[j];
    if(len==strlen(s[j]))s2=s[j];
  }
  cout << s1 << " " << s2 << endl;
  return 0;
}
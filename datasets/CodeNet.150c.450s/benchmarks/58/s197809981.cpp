#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main(){
  int ans[1000],i=0;
  char ch[1000];
  while(1){
    if(scanf("%s",ch)==EOF)break;

    if(ch[0]!='+'&&ch[0]!='-'&&ch[0]!='*')ans[i]=atoi(ch);
    else {
    if(ch[0]=='+')ans[i-2]+=ans[i-1];
    else if(ch[0]=='-')ans[i-2]-=ans[i-1];
    else if(ch[0]=='*')ans[i-2]*=ans[i-1];
    i-=2;
    }

    i++;
  }
    cout<<ans[0]<<endl;
    return 0;
}
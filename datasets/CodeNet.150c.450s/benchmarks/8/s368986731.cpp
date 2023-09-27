#include <cstdio>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
  int a=0,b=0,n;
  string s1,s2;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    cin>>s1>>s2;
    if(s1>s2) a+=3;
    else if(s2>s1) b+=3;
    else {a+=1;b+=1;}
    }
  printf("%d %d\n",a,b);
  return 0;
}
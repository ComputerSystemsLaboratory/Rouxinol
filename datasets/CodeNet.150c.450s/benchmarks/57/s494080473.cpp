#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
int a,b,c,d,h,i;
char e,g,f;
while(scanf("%d%c%c%c%d",&a,&c,&g,&d,&b)){
      if(g == '?'){
           return 0;
      }
      else if(g == '+'){
         c=a+b;
         cout<<c<<endl;
      }
      else if(g == '-'){
          d=a-b;
          cout<<d<<endl;
      }
      else if(g == '*'){
           h=a*b;
           cout<<h<<endl;
      }
      else if(g == '/'){
           i=a/b;
           cout<<i<<endl;
      }
      }
}
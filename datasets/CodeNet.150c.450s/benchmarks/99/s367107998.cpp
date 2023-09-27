#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main(){
  int n;
  cin >> n;
  int state,c;
  for(int i=0;i<n;++i){
    stack<char> q;
    int a=0,b=0;
    // a
    state=1;
    while((c=getchar())!=' '){
      if('2'<=c&&c<='9') state=c-'0';
      else if(c=='m'){a+=1000*state; state=1;}
      else if(c=='c'){a+=100*state; state=1;}
      else if(c=='x'){a+=10*state; state=1;}
      else if(c=='i')a+=state;
    }
    // b
    state=1;
    while((c=getchar())!='\n'){
      if('2'<=c&&c<='9') state=c-'0';
      else if(c=='m'){b+=1000*state; state=1;}
      else if(c=='c'){b+=100*state; state=1;}
      else if(c=='x'){b+=10*state; state=1;}
      else if(c=='i')b+=state;
    }

    int sum=a+b;
    if(sum%10>=2) {q.push('i'); q.push('0' + sum%10);}
    else if(sum%10==1) q.push('i');
    sum/=10;
    if(sum%10>=2) {q.push('x'); q.push('0' + sum%10);}
    else if(sum%10==1) q.push('x');
    sum/=10;
    if(sum%10>=2) {q.push('c'); q.push('0' + sum%10);}
    else if(sum%10==1) q.push('c');
    sum/=10;
    if(sum%10>=2) {q.push('m'); q.push('0' + sum%10);}
    else if(sum%10==1) q.push('m');

    while(!q.empty()){
      cout << q.top();
      q.pop();
    }
    putchar('\n');
  }

}
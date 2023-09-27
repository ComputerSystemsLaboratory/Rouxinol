#include<bits/stdc++.h>
#include<sstream>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

char c[1024];

void print(int a,int b){
  for(int i=a;i<=b;i++)
    cout<<c[i];
  cout<<endl;
}
void replace(int a,int b, char* str){
  for(int i=0;i<=b-a;i++)
    c[a+i]=str[i];
}
void reverse(int a,int b){
  for(int i=a;i<=(a+b)/2;i++)
    swap(c[i],c[b-(i-a)]);
}

int main(){ _;
  int q;
  cin>>c>>q;
  REP(i,q){
    char query[16];cin>>query;
    int a,b;cin>>a>>b;
    switch(query[2]){
    case 'p':
      char str[1024];cin>>str;
      replace(a,b,str);
      break;
    case 'v': reverse(a,b);break;
    case 'i': print(a,b);break;
    }
  }
}
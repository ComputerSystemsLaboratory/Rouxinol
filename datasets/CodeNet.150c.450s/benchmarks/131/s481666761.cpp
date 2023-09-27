#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
string ItoS(int );
int StoI(string );
int b[1000000],d[1000000],l;

int main(){
  while(1){
    int a;
    cin>>a>>l;
    if(a+l==0)break;
    memset(b,0,sizeof(b));
    int count=0,count1=0;

    while(1){
      //      cout<<a<<endl;
      if(b[a]==1)break;
      b[a]=1;
      count++;
      d[a]=count;
      string r=ItoS(a);
      string r1=r;
      reverse(r1.begin(),r1.end());
      int c=StoI(r);
      int c1=StoI(r1);
      a=c1-c;
    }
    cout<<d[a]-1<<' '<<a<<' '<<count-d[a]+1<<endl;
  }
  return 0;
}


string ItoS(int x){
  string str;
  while(x){
    str+=x%10+'0';
    x/=10;
  }
  for(int i=str.size();i<l;i++)str+='0';
  sort(str.begin(),str.end());
  return str;
  }

int StoI(string s){
  int r=0;
  for(int i=0;i<s.size();i++)
    r=r*10+s[i]-'0';
  return r;
}
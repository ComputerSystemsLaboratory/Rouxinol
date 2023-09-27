#include<iostream>
#include<cstdlib>
using namespace std;

int Hen(char s,char t){
  return ((s-'0')*10+(t-'0'));
}
int main()
{
  string s,f;
  int n,a,b,max,T[86401]={};
  while(1){
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin>>s>>f;
      a=(Hen(s[0],s[1])*3600+Hen(s[3],s[4])*60+Hen(s[6],s[7]));
      b=(Hen(f[0],f[1])*3600+Hen(f[3],f[4])*60+Hen(f[6],f[7]));
      for(int j=a;j<b;j++)T[j]++;
    }
    max=0;
    for(int i=0;i<86401;i++){
      if(max<T[i])max=T[i];
      T[i]=0;
    }
    cout<<max<<endl;
  }
  return 0;
}
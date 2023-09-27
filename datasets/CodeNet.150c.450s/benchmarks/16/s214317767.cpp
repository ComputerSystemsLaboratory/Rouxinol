#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define p pair<char,int>
int main(){
  string a;
  p b[20000];
  int n=0,cnt=0,c[100000]={},t=0,sum=0;
  cin>>a;
  for(int i=0;i<a.size();i++){
    if(a[i]!='/'&&a[i]!='_')n--;
    b[i]=make_pair(a[i],n);
    if(a[i]=='/')n++;
  }
  for(int i=0;i<a.size();i++){
    if(a[i]!='/'&&a[i]!='_'){
      for(int j=i;j<a.size();j++){
        if(a[j]=='/'&&b[j].second==b[i].second){
          if(i>=t)t=0,cnt++;
          c[cnt]+=j-i;
          sum+=j-i;
          if(j>t)t=j;
          break;
        }
      }
    }
  }
  cout<<sum<<endl<<cnt;
  for(int i=1;i<cnt+1;i++)cout<<" "<<c[i];
  cout<<endl;
  return 0;
}
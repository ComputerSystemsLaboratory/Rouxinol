#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int H=60*60;
const int M=60;
const int S =1;

int train[24*H+1];
int unit[3]={H,M,S};

int getTime(string s){
  string tmp;
  int res=0;
  for(int i=0;i<3;i++){
    tmp=s.substr(3*i,2);
    int val=atoi(tmp.c_str());
    res+=unit[i]*val;
  }
  return res;
}

int main(){
  int n;
  while(cin>>n,n){
    memset(train,0,sizeof(train));
    for(int i=0;i<n;i++){
      string start,arrival;
      int st=0,at=0;
      cin>>start>> arrival;
      st=getTime(start);
      at=getTime(arrival);
      for(int i=st;i<at;i++)train[i]++;
    }
    int ans=0;
    for(int i=0;i<=24*H;i++){
      ans=max(ans,train[i]);
      //cout << train[i] << " ";
    }
    cout << ans << endl;
  }
  return 0;
}
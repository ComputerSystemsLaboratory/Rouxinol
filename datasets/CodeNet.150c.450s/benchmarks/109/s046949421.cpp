#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define IN 1;
#define OUT -1;

struct data{string time;int io;};
//bool operator<(data a,data b){return a.time<b.time?1:a.io<b.io;}
bool operator<(data a,data b){return a.time!=b.time?a.time<b.time:a.io<b.io;}

int main()
{
  int n,i,cnt,max;
  vector<data> v;
  while(cin>>n,n){
    v.resize(2*n);
    for(i=0;i<2*n;i+=2){
      cin>>v[i].time>>v[i+1].time;
      v[i].io=IN;
      v[i+1].io=OUT;
    }
    sort(v.begin(),v.end());
    for(cnt=max=i=0;i<2*n;i++){
      cnt+=v[i].io;
      if(max<cnt)max=cnt;
    }
    cout<<max<<endl;
  }
}
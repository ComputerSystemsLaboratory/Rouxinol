#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(const pair<int,int> &A,const pair<int,int> &B){
	if(A.first!=B.first) return A.first<B.first;
	else return A.second<B.second;
}

int main(void){
  int n;
  while(cin>>n,n){
    vector<pair<int,int> > timetable;
    for(int i=0;i<n;++i){
      int sh,sm,ss,eh,em,es;
      scanf("%d:%d:%d",&sh,&sm,&ss);
      scanf("%d:%d:%d",&eh,&em,&es);
      timetable.push_back(make_pair(sh*3600+sm*60+ss,1));
      timetable.push_back(make_pair(eh*3600+em*60+es,-1));
    }
    sort(timetable.begin(),timetable.end(),compare);
    int ans=0;
    int now=0;
    for(int i=0;i<2*n;++i){
    	now+=timetable[i].second;
    	ans=max(now,ans);
    }
    cout<<ans<<endl;
  }
  return 0;
}
#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;
int ps[210];
int main(){ _;
  int m,nmin,nmax;
  while(cin>>m>>nmin>>nmax,(m|nmin|nmax)!=0){
    nmin--;nmax--;
    int p;
    REP(i,m)cin>>ps[i];
    int maxGap=0,maxGapIndex;
    for(int i=nmin;i<=nmax;i++){
      int gap=ps[i]-ps[i+1];
      if(gap>=maxGap){
	maxGap=gap;
	maxGapIndex=i;
      }
    }
    cout<<maxGapIndex+1<<endl;
  }
}
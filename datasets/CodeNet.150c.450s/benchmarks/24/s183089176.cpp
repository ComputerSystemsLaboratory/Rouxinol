#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){

  int N,M;
  while(1){
    cin>>N>>M;
    if(N==0&&M==0) break;
    
    vector<pair<int,int> > PD(N);

    unsigned long long prob;
    
  for(int i=0; i<N;i++) {
    cin>>PD[i].second>>PD[i].first;
    }

  sort(PD.begin(),PD.end());

    
  int k=N-1;
  
  while(M>=0 && k>=0){

    if (PD[k].second<=M) { 
      M-=PD[k].second;
      PD[k].second=0;
      }
    
    else {
      PD[k].second-=M;
      M=-1;
    }
    k--;
  }
  
  prob=0;
  for(int i=0;i<N;i++) prob+=PD[i].first*PD[i].second;
  cout<<prob<<endl;
  }
  return 0;}
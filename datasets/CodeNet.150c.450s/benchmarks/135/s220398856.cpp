#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string.h>
#include <set>
#include <map>
#define pb push_back
using namespace std;
int n,m;

int mitih[1500000],mitiw[1500000];

int main(void){
  int i,j,x,tmp,res;
  vector<int> h,w;
  while(scanf("%d %d",&n,&m),n|m){
    h.clear(),w.clear();
    for(i=1;i<=n;i++) {
      cin>>x;
      h.pb(x);
    }
    for(i=1;i<=m;i++){
      cin>>x;
      w.pb(x);      
    }
    //set<int> st1,st2;
    vector<int> s1,s2;
    for(i=0;i<n;i++){
      tmp=0;
      for(j=i;j<n;j++){
	tmp+=h[j];
	s1.pb(tmp);
      }
    }
    for(i=0;i<m;i++){
      tmp=0;
      for(j=i;j<m;j++){
	tmp+=w[j];
	s2.pb(tmp);
      }
    }
    h.clear();w.clear();
    //for(auto itr=st1.begin();itr!=st1.end();++itr) h.pb(*itr);
    //for(auto itr=st2.begin();itr!=st2.end();++itr) w.pb(*itr);
    i=j=res=0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    tmp=max(s1[s1.size()-1],s2[s2.size()-1]);
    /*
    for(i=0;i<s1.size();i++) printf("%d ",s1[i]);
    printf("\n");
    for(i=0;i<s2.size();i++) printf("%d ",s2[i]);
    printf("\n");
    */
    //printf("5\n");
    
    map<int,int> mp1,mp2;
    //tmp=max(s1.size(),s2.size());
    for(i=0;i<tmp;i++){
      mp1[i]=mp2[i]=0;
    }
    for(i=0;i<s1.size();i++) mp1[s1[i]]++;
    for(i=0;i<s2.size();i++) mp2[s2[i]]++;
    for(i=0;i<=tmp;i++){
      //printf("%d : %d %d\n",i,mp1[i],mp2[i]);
      res+=mp1[i]*mp2[i];
    }
    
    printf("%d\n",res);
  }
  return 0;
}


/*
int solveninaritakattananika(){
  int i,j,k,n;
  int res=0;
  n=max(h[h.size()-1],w[w.size()-1]);
  for(k=1;k<=n;k++){
    for(i=0;i<h[h.size()-1]-k+1;i++){
      for(j=0;j<w[w.size()-1]-k+1;j++){
	if(mitih[i]==1&&mitih[i+k]==1&&mitiw[j]==1&&mitiw[j+k]==1) res++;
	//printf("%d %d %d %d : ",mitih[i],mitiw[j+k],mitih[i+k],mitiw[j]);
	//printf("(%d,%d) k=%d  res=%d\n",i,j,k,res);
      }
    }
  }
  return res;
}
*/
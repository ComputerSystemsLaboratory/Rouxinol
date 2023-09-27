#include<bits/stdc++.h>
#define MAX_C 10000
using namespace std;
int r,c;
int senbei[1<<10][MAX_C+1];

int bitCnt(int n){
  int cnt=0;
  while(n>0){
    if(n%2==1)cnt++;
    n/=2;
  }
  if(r-cnt<cnt){
    return r-cnt;
  }else{
    return cnt;
  }
}

int rec(int s,int n){
  if(senbei[s][n]!=-1){
    return senbei[s][n];
  }
  int tmp=s;
  for(int i=0;tmp>0;i++){
    if(tmp%2==1){
      for(int j=0;j<c;j++){
	int bitpos=1<<i;
	senbei[s][j]=rec(s^bitpos,j)^bitpos;
      }
    }
    tmp/=2;
  }
  return senbei[s][n];
}

int minimam(){
  int ans=1<<30;
  int tmp=0;
  for(int i=0;i<1<<r;i++){
    tmp=0;
    for(int j=0;j<c;j++){
      tmp+=bitCnt(senbei[i][j]);
    }
    if(ans>tmp)ans=tmp;
  }
  return ans;
}

int main(){
  while(cin>>r>>c){
    if(c==0)break;
    int tmp[c];
    memset(tmp,0,sizeof(tmp));
    memset(senbei,-1,sizeof(senbei));
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
	tmp[j]=tmp[j]<<1;
	int bit;
	cin>>bit;
	if(bit==1){
	  tmp[j]=tmp[j]|1;
	}
      }
    }
    for(int i=0;i<c;i++){
      senbei[0][i]=tmp[i];
      //cout << tmp[i] << endl;
    }
    rec((1<<r)-1,0);

    cout<<r*c-minimam()<<endl;
  }
  return 0;
}
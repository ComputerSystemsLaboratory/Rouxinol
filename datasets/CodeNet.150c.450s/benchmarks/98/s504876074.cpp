#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  int s;
  int tsum,hsum,dif;
  bool a;
  int t[100];
  int h[100];
  while(1){
    cin>>n>>m;
    if(n==0 && m==0) break;
    for(int i=0;i<100;i++){
      t[i]=0;
    }
    for(int i=0;i<100;i++){
      h[i]=0;
    }
    tsum=hsum=0;
    a=true;
    for(int i=0;i<n;i++){
      cin>>s;
      t[i]=s;
      tsum+=s;
    }
    for(int i=0;i<m;i++){
      cin>>s;
      h[i]=s;
      hsum+=s;
    }
    dif=max(tsum-hsum,hsum-tsum);
    sort(t,t+n);
    sort(h,h+m);
    /* for(int i=0;i<n;i++){
      cout<<t[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
      cout<<h[i]<<" ";
    }
    cout<<endl;
    cout<<tsum<<" "<<hsum<<" "<<dif<<endl;*/
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if(dif==(t[i]-h[j])*2 && tsum>=hsum){
	  cout<<t[i]<<" "<<h[j]<<endl;
	  /*cout<<i<<" "<<j<<endl;*/
	  a=false;
	}
	else if(dif==(h[j]-t[i])*2 && tsum<=hsum){
	  cout<<t[i]<<" "<<h[j]<<endl;
	  /*cout<<i<<" "<<j<<endl;*/
	  a=false;
	}
	if(!a) break;
      }
	if(!a) break;
    }
     if(a) cout<<-1<<endl;
  }
  return 0;
}


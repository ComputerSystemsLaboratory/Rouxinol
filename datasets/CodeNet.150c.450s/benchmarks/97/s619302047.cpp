#include<bits/stdc++.h>
using namespace std;
#define MK make_pair 



int main(){
  while(1){




    
  pair<int,int> a[1000];
  int xmx=0,xmi=0,ymx=0,ymi=0;
  a[0]=MK(0,0);
  int n;
  cin>>n;
  if(n==0){break;}
  for(int i=1;i<n;i++){
    int w,t;
    cin>>w>>t;
    int p=0,q=0;
    if(t==0){q=-1;}
    if(t==1){p=-1;}
    if(t==2){q=1;}
    if(t==3){p=1;}
    a[i]=MK(a[w].first+p,a[w].second+q);
    xmx=max(xmx,a[i].first);
    xmi=min(xmi,a[i].first);
    ymx=max(ymx,a[i].second);
    ymi=min(ymi,a[i].second);
  }
  cout<<ymx-ymi+1<<" "<<xmx-xmi+1<<endl;









  }
  return 0;
}


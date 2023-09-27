#include <iostream>
using namespace std;

int main(){
  int st,en,i;
  int tot,n,cnt;
  while(1){
    cin >> n;
    if (n==0) break;
    if (n==1){
      cout << 0 << endl;
      continue;
    }
    cnt=0;
    tot=0;
    for (i=1;tot<n;i++)tot+=i;
    st=1;
    en=i-1;
    while(1){
      if (tot==n){
	cnt++;
	en++;
	tot+=en;
      }else{
	if (tot<n){
	  en++;
	  tot+=en;
	}else{
	  tot-=st;
	  st++;
	}
      }
      if (st==en)break;
    }
    cout << cnt << endl;
  }
  return 0;
}
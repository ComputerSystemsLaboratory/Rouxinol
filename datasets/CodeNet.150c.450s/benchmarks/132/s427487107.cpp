#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p,f,a;
  while(1){
    cin >> n >> p;
    a = p;
    if(n==0 && p==0) break;
    int set[50]={};
    int i=0;
    while(1){
      if(i==n) i = 0;
      if(p>0){
        set[i]++;
	p--;
      }
      else{
	if(set[i]!=0){
	p=p+set[i];
	set[i]=0;
	}
      }
      //for(int j=0; j<n; j++) cout << set[j] << " ";
      //cout << endl;
      //cout << p << endl;
      if(set[i]==a){
	f = i;
	break;
      }
      i++;
    }
    cout << f << endl;
  }
  return 0;
}

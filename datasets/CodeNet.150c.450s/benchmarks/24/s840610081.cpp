#include<iostream>
using namespace std;

int main(){
  int m,n;
  n=1;
  while(n>0){
    cin >> n >> m;
    if(n==0) break;
    
    int d[n],p[n];
    int s=0;
    for(int i=0;i<n;i++){
      cin >> d[i] >> p[i];
      s += d[i]*p[i];
    }

    for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
	int a,b;
	if(p[j]<p[i]){
	  a = d[i];
	  b = p[i];
	  d[i] = d[j];
	  p[i] = p[j];
	  d[j] = a;
	  p[j] = b;
	}
      }
    }

    int i=0;
    while(m>0 && i<=n-1){
      if(m>=d[n-i-1]){
	m-=d[n-i-1];
	s-=d[n-i-1]*p[n-i-1];
      }else{
	s-=m*p[n-i-1];
	m=0;
      }
      i++;
    }
    cout << s << endl;
  }
}
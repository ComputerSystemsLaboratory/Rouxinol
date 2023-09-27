#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  while(cin>>n>>m,n){
    int a[n],b[m];

    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<m;i++){
      cin>>b[i];
    }

    int sumA,sumB;
    sumA = sumB = 0;
    for( int i=0;i<n;i++)sumA += a[i];
    for( int i=0;i<m;i++)sumB += b[i];
    int diff = sumA - sumB;
    sort(a,a+n);
    sort(b,b+m);
    bool flag=true;
    for( int i=0;i<n;i++){
      for(int j=m-1;j>=0;j--){
	if(2*(a[i]-b[j])==diff){
	  cout << a[i] << " " << b[j] << endl;
	  flag=false;
	  break;
	}
      }
      if(flag==false)break;
    }
    if(flag!=false)
      cout << -1 << endl;
  }
  return 0;
}
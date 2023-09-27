#include <iostream>

using namespace std;

int main(){
  int n,m,d[10],a,b,t;

  while (1){
    for (int i=0;i<10;i++)d[i]=0;
    t=0;
    cin >> n >> m;

    if (n==0&&m==0)break;
    for (int i=0;i<n;i++) {
      cin >> a >> b;
      d[b-1]+=a;
    }
    for (int i=9;i>=0;i--){
      if (m==0) break;
      if (d[i]<=m){
	m-=d[i];
	d[i]=0;
      }else if (d[i]>m){
	d[i]-=m;
	m=0;
      }
    }
    for (int i=0;i<10;i++){
      t+=d[i]*(i+1);
    }
    cout << t << endl;
  }

  return 0;
}
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>

using namespace std;

int h[1024*1500];
int w[1024*1500];

int main(){
  int n,m;
  while(scanf("%d%d",&n,&m), n+m){
    int hh[n];
    int ww[m];
    memset(h, 0, sizeof(h));
    memset(w, 0, sizeof(w));

    for(int i=0; i<n; i++)
      scanf("%d",&hh[i]);
    for(int i=0; i<m; i++)
      scanf("%d",&ww[i]);

    for(int i=0; i<n; i++){
      int sum = 0;
      for(int j=i; j<n; j++){
	sum += hh[j];
	h[sum]++;
      }
    }
    for(int i=0; i<m; i++){
      int sum = 0;
      for(int j=i; j<m; j++){
	sum += ww[j];
	w[sum]++;
      }
    }
    long long ans = 0;
    for(int i=0; i<1500*1024; i++)
      ans += (long long)w[i] * h[i];

    cout << ans << endl;
  }
  return 0;
}
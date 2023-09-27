#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>

using namespace std;

int h[1024*1500];
int w[1024*1500];

int getInt(){
  int c = getchar();
  int ret = 0;
  while(!isdigit(c)) c = getchar();
  while(isdigit(c)){
    ret *= 10;
    ret += c - '0';
    c = getchar();
  }
  return ret;
}

int main(){
  int n,m;
  while(n=getInt(), m=getInt(), n+m){
    int hh[n];
    int ww[m];
    int mm = 0;

    for(int i=0; i<n; i++)
      hh[i] = getInt();
    for(int i=0; i<m; i++)
      ww[i] = getInt();

    for(int i=0; i<n; i++){
      int sum = 0;
      for(int j=i; j<n; j++){
	sum += hh[j];
	h[sum]++;
      }
      mm = max(mm, sum);
    }
    for(int i=0; i<m; i++){
      int sum = 0;
      for(int j=i; j<m; j++){
	sum += ww[j];
	if(sum > mm) break;
	w[sum]++;
      }
    }
    long long ans = 0;
    for(int i=0; i<=mm; i++){
      if(w[i] | h[i]){
	ans += (long long)w[i] * h[i];
	w[i] = h[i] = 0;
      }
    }

    cout << ans << endl;
  }
  return 0;
}
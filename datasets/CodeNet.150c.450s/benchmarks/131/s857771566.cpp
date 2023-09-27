#include<iostream>
#include<algorithm>
using namespace std;

int a,l;
int vis[1000000];
int mi[10],ma[10];

int main(){
  while(cin >> a >> l,l){
    int lim = 1;
    for(int i=0;i<l;i++)lim *= 10;

    for(int i=0;i<lim;i++)vis[i] = -1;
    vis[a] = 0;

    for(int cnt=1;;cnt++){
      for(int i=0;i<l;i++){
	mi[i] = ma[i] = a%10;
	a /= 10;
      }
      sort(mi,mi+l);
      sort(ma,ma+l,greater<int>());

      for(int i=0;i<l;i++)ma[i] -= mi[i];
      for(int i=0;i<l;i++)a = a*10 + ma[i];

      if(vis[a]>=0){
	cout << vis[a] << " " << a << " " << cnt - vis[a] << endl;
	break;
      }
      vis[a] = cnt;
    }
  }
}
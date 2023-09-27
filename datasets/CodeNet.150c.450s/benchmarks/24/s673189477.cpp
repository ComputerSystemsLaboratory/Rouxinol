#include <iostream>
#include <algorithm>
#define N 10000
using namespace std;
struct s{
  int d;
  int p;
  int dcnt;
};
int main(){
  int n,m,i,j,flag,kitaiti;
  struct s data[N];
  while(1){
    flag=0;
    kitaiti=0;
    cin >> n >> m;
    if(n==0&&m==0) break;
    for(i=0;i<n;i++){
      cin >> data[i].d >> data[i].p;
      data[i].dcnt=data[i].d;
    }
    for(i=0;i<n;i++){
      for(j=1;j<n;j++){
	if(data[j].p>data[j-1].p) swap(data[j],data[j-1]);
      }
    }
    for(i=0;i<n;i++){
      if(flag==0){
	if(m>=data[i].dcnt) m-=data[i].dcnt;
	else{
	  flag=1;
	  kitaiti=(data[i].dcnt-m)*data[i].p;
	}
      }
      else{
	kitaiti=kitaiti+data[i].dcnt*data[i].p;
      }
    }
    cout << kitaiti << endl;
  }
  return 0;
}
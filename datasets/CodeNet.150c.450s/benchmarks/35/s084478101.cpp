
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
  int a[5000];
  while(cin >> n && n>0){
    for(int i=0;i<n;i++)
      cin >> a[i];
    long long sum=0,tmp=0,ma=-100000;
    int m=-100000;
    bool flg=true;
    for(int i=0;i<n;i++){
      if(flg) m=max(m,a[i]);
      if(a[i]>=0){
	flg=false;
	sum+=a[i];
	continue;
      }
      ma=ma>sum?ma:sum;
      for(tmp=sum;i<n && a[i]<0;i++){
	tmp+=a[i];
      }i--;
      if(tmp>0)
	sum=tmp;
      else
	sum=0;
    }
    ma=ma>sum?ma:sum;

    cout << (flg?m:ma) << endl;
  }
}
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
  int num,n;
  while(cin>>num>>n,n){
    int cnt=0,k[30],nn[1000000]={};
    while(1){
      vector<int> a;
      k[cnt]=num;
      cnt++;
      nn[num]++;
      if(nn[num]==2){
	for(int i=0;i<=cnt;i++){
	  if(k[i]==num){
	    cout<<i<<" "<<num<<" "<<cnt-i-1<<endl;
	    break;
	  }
	}
	break;
      }
      int neko=num;
      for(int i=0;i<n;i++){
	a.push_back(neko%10);
	neko/=10;
      }
      sort(a.begin(),a.end());
      int min=0,max=0;
      for(int i=0;i<n;i++){
	max+=a[i]*pow(10,i);
	min+=a[n-i-1]*pow(10,i);
      }
      num=max-min;
    }
  }
  return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a,m[1001],k;
  cin >> a;
  for(int i=0;i<a;i++)cin>>m[i];
  for(int i=0;i<a;i++){
    k=i;
    while(1){
      if(k==0)break;
      else if(m[k]<m[k-1]){
	swap(m[k],m[k-1]);
	k--;
      }else break;
    }
    for(int j=0;j<a;j++){
      cout<<m[j];
      if(j<a-1)cout<<" ";
      else cout << endl;
    }
  }
  return 0;
}

	
  
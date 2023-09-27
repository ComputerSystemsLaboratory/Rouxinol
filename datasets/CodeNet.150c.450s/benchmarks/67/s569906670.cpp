#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;

  while(cin>>n,n!=0){
    int cnt=0;
  
    for(int i=1; i<n; ++i){
      int sum=0;
      for(int j=i; sum<n; ++j){
	sum = sum + j;
	if(sum==n){++cnt;}
      }
    }
    cout << cnt <<endl;
  } 
  return 0;
}
      
	  

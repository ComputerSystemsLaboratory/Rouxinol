#include<iostream>
using namespace std;

int main(void){
  int n;
  while(cin >> n){
    int nums[n];
    int prime=0;
    for(int i=1;i<=n;i++){
      nums[i]=i;
    }
    for(int i=1;i<=n;i++){
      if(nums[i]>1){
	prime++;
	for(int j=2;nums[i]*j<=n;j++){
	  nums[nums[i]*j]=1;
	}
      }
    }
    cout << prime << endl;
  }
  
  return 0;
}
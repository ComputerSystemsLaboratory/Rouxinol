#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

  while(1){
  
    int n,m,sum1=0,sum2=0,i;
    cin >> n >> m;
    if(n+m==0) break;
    int arr1[n],arr2[m];

    for(i=0;i<n;i++){
      cin >> arr1[i];
      sum1+=arr1[i];
    }
    for(i=0;i<m;i++){
      cin >> arr2[i];
      sum2+=arr2[i];
    }

    for(i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if(sum1-sum2 == arr1[i]*2 - arr2[j]*2){
	  printf("%d %d\n",arr1[i],arr2[j]);
	  goto out;
	}
      }
    }
  out:
    if(i == n) printf("-1\n");
  }
  return 0;
}
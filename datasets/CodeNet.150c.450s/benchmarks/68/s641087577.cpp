#include<iostream>
using namespace std;
int main(){
  int n,min = 1000000,temp=0,i;
  while(1){
    cin >> n;
    if(n==0) break;
    int a[1000];
    for(i=0;i<n;i++){
    cin >> a[i];
    }
    for(int j=0;j<n-1;j++){  
      for(i=0;i<n-1;i++){
	if(a[i]>a[i+1]){
	  swap(a[i],a[i+1]);
	}
      }
    }
    
    for(i=0;i<n-1;i++){
      if((a[i+1]-a[i])<min){
	min = (a[i+1]-a[i]);
      }
    }
    if(min<0) min *= -1;
    cout << min << endl;
    min=1000000;
    temp=0;
    }
  return 0;
}
  


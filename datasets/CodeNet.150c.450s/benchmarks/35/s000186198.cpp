#include<iostream>
using namespace std;
int main(){
  int n,d[5000];
  int sum,max;
  while(cin>>n){
    if(n==0)break;
    max=-100001;
    for(int i=0;i<n;i++){
      cin>>d[i];
    }
    for(int i=0;i<n;i++){
      sum=0;
      for(int j=i;j<n;j++){
	sum+=d[j];
	if(sum>max){
	  max=sum;
	}
      }
    }
    cout<<max<<endl;
  }
  return 0;
}
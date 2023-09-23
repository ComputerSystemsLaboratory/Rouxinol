#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n;
  int m=1000001;
  int k;
  while(1){
    m=1000001;
    cin >> n;
    if(n==0)break;
    for(int i=0;i*i*i<=n;i++){
      if(n-i*i*i==0){
	m=min(m,i);
	continue;
      }
      for(int j=0;i*i*i+j*j<=n;j++){
	k=n-(i*i*i+j*j);
	//	cout << k << " "<< j <<" "<<i<< endl;
	m=min(m,i+j+k);
      }
    }    
    cout << m << endl;
  }
  return 0;
}
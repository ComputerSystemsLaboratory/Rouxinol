#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool p[1000001];

int main(void){

  fill(p,p+1000001,true);
  p[0]=p[1]=false;
  
  for(int i=2;i*i<1000001;i++){
    if(p[i]){
      for(int j=i*i;j<1000001;j+=i){
	p[j] = false;
      }
    }
  }

  int a,d,n;
  while(cin >> a >> d >> n,a|d|n){
    int cnt=0,i=a;
    for(;cnt<n;i+=d)cnt+=p[i];
    cout << i-d << endl;
  }
  
  return 0;
}
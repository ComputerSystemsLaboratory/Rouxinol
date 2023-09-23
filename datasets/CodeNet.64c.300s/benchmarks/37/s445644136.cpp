#include<iostream>
using namespace std;

int main(){
  int N,m,ans,i;
  ans=0;
  i=0;
  while(1){
    ans =0;
    cin >> N;
    for(int a=1;a<N;a++){
      m=0;
      for(i=a;i<N;i++){
	m+=i;
	if(m==N){
	  ans++;
	}
      }
    }
    if(N==0){
      break;
    }
    cout << ans << endl;
  }
  return 0;
}
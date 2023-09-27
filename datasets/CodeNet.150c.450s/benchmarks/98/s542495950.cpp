#include<bits/stdc++.h>
using namespace std;
int N,M;
int S1[111],S2[111];
int main(){
  while(  cin >> N >> M && ( N||M ) ){
    for(int i=0;i<N;i++) cin >> S1[i];
    for(int i=0;i<M;i++) cin >> S2[i];
    
    int res1=111,res2=111;
    for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
	swap(S1[i],S2[j]);
	int sum1=0,sum2=0;
	for(int k=0;k<N;k++)
	  sum1 += S1[k];
	for(int k=0;k<M;k++)
	  sum2 += S2[k];
	
	if( sum1 == sum2 ){
	  if( res1 + res2 > S1[i] + S2[j] ){
	    res1 = S1[i]; res2 = S2[j];
	  }
	}
	swap(S1[i],S2[j]);
      }
    }

    if( res1 == 111 ) cout << "-1" <<endl;
    else cout << res2 << " " << res1 << endl;

  }
}
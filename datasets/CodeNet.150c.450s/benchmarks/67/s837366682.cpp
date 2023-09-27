#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,ans,work;

  while(true){
    cin >> N;
    if(N == 0) break;
    ans = 0;
    for(int i = 1; i<N/2.0; ++i){
      work = i;
      for(int k = i+1;k<=N/2.0+1;++k){
	work += k;

	if(work > N){
	  break;
	}else if(work == N){
	  ++ans;
	  break;
	}
      }
    }

    cout << ans << endl;
  }
  return 0;
}


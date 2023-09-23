#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

#define N 10

int main(){
  int tc; //test case
  cin >> tc;

  while(tc-->0){
    //maximun 1024 pattern. try all

    int n[10];
    for(int i=0; i<N; i++){ scanf("%d", &n[i]); }

    int b, c; //tube
    bool ans = false;
    for(int i=0; i<(1<<N); i++){
      int bit=i; b=c=0;
      for(int j=0; j<N; j++){
	if(bit%2==0){ // to B
	  if(b < n[j]) b=n[j];
	  else break;
	} else { // to C
	  if(c < n[j]) c=n[j];
	  else break;
	}
	if(j==N-1){
	  ans=true;
	  goto OUT;
	}
	bit /= 2;
      }
    }

  OUT:
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;

  }
}
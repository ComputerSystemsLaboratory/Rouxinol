#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,c;
  int minn;

  int *b;
  
  while(true){
    cin >> n;
    if(n == 0) break;

    b = new int[n];
    
    for(int i=0;i<n;++i){
      cin >>b[i]; 
    }

    minn = abs(b[0] - b[1]);
    for(int i=0;i<n-1;++i){
      for(int k=i+1;k<n;++k){
	minn = min(minn,abs(b[i] - b[k]));
      }
    }

    delete[] b;
  cout << minn << endl;
  }

  /*
  while(true){
    cin >> n;
    if(n == 0) break;

    minn = 1000000;

    cin >> a;
    c = a;
    for(int i=1;i<n-1;++i){
      cin >> a;
      minn = min(minn, )
    }
  }
  */
  return 0;
}


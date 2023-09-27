#include<iostream>
using namespace std;

int main() {
  int n,m;
  cin >> n;
  for(int i= 1;i<=n;i++){
    if(i%3 == 0){
      cout << " " << i;
    }else{
      m = i;
      while(m>1){
	if(m%10 == 3){
	  cout << " " << i;
	  break;
	}else{m /= 10;}
      }
    }
  }
  cout << endl;
    return 0;
}


#include <iostream>

using namespace std;

#define MAX 1000000

int main(){
  int n;
  bool p[MAX];
  p[0] = p[1] = false;
  for(int i=2;i<MAX;i++)p[i] = true;
  for(int i=2; i<MAX;i++){
	if(p[i]){
	  for(int j=i+i;j<MAX;j=j+i){
		p[j] = false;
	  }
	}
  }
  
  while(cin >> n){
	int cnt = 0;
	for(int i = 0;i<=n;i++){
	  if(p[i]) cnt++;
	}
	cout << cnt << endl;
  }
  
  return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int n;
  while(true){
	cin >> n;
	if(!n) break;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];

	int max = a[0];
	for(int i=0;i<n;i++){
	  int sum = 0;
	  for(int j=i;j<n;j++){
		sum += a[j];
		if(max < sum) max = sum;
	  }
	}
	
	cout << max << endl;
  }
  return 0;
}
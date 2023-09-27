#include <bits/stdc++.h>
using namespace std;
int main(){
  int N, i, j, tmp, cnt = 0;
  int num[100];
  
	cin >> N;
  
	for( i = 0 ; i < N ; i++){
    cin >> num[i];
  	}
	
  for(i = 0 ; i < N ; i++){
    for(j = N - 1 ; j >= i+1 ; j--){
      if(num[j] < num[j-1]){
    tmp = num[j];
    num[j] = num[j-1];
    num[j-1] = tmp;
    cnt++;
      }
    }
  }
  for(i = 0 ; i < N-1 ; i++){
  	cout << num[i] << " ";
  	}
	cout << num[N-1] << endl;
	cout << cnt << endl;
	
	return 0;
}
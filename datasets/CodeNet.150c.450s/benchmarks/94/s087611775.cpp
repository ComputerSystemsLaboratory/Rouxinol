#include <iostream>
using namespace std;

int main(){
  int N, a[110];
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  int ans=0;
  for(int i = 0; i < N; i++){
    for(int j = N-1; j >= i-1; j--){
      if(a[j] < a[j-1] && j-1 >= 0){
	int tmp = a[j];
	a[j] = a[j-1];
	a[j-1] = tmp;
	ans++;
      }
    }
  }
  for(int i = 0; i < N;i++){
    if(i < N-1) cout << a[i] << " ";
    else cout << a[i] << endl;
  }
  cout << ans << endl;
  return 0;
}
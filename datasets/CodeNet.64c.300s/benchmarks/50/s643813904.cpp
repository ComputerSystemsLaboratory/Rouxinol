#include<bits/stdc++.h>
using namespace std;
int main(){
  int N,cnt = 0;
  cin >> N;
  int bubble[N];
  for(int i=0;i<N;i++){
    cin >> bubble[i];
  }
  
  double flag = true;
  while(flag){
    flag = false;
    for(int j=N-1;j>=1;j--){
      if(bubble[j] < bubble[j-1]){
	swap(bubble[j],bubble[j-1]);
	cnt++;
	flag = 1;
      }
    }
  }
  for(int i=0;i<N;i++){
    if(i!= N-1){
    cout << bubble[i] << " ";
    }
    else{
      cout << bubble[i] << endl;
    }
  }
  cout << cnt << endl;
}
      
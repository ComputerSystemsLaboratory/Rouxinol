#include<bits/stdc++.h>
using namespace std;
int main(){
  int N,cnt =0,minj;
  cin >> N;
  int select[N];
  for(int i=0;i<N;i++){
    cin >> select[i];
  }
  for(int i=0;i<N-1;i++){
    minj=i;
    for(int j=i;j<=N-1;j++){
      if (select[j] < select[minj]){
	minj = j;
      }
    }
    if(i!=minj){
    swap(select[i],select[minj]);
    cnt++;
    }
  }
  for(int i=0;i<N;i++){
    if(i!=N-1){
      cout << select[i] <<" ";
    }
    else{
      cout << select[i] << endl;
    }
  }
  cout << cnt << endl;
}
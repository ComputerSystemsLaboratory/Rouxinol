#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,num[100],tmp
    ;
  int i,j;
  int min,cnt=0;

  cin >> N;

  for(i = 0 ; i < N ; i++){
    cin >> num[i];
  }

  for(i = 0 ; i < N ; i++){
    min = i;
    for(j = i ; j < N ; j++){
      if(num[j] < num[min]){
	min = j;       
      }
    }
     
    tmp = num[i];
    num[i] = num[min];
    num[min] = tmp; 

    if(i != min){
      cnt++;
    }
  }

  for(i = 0 ; i < N-1 ; i++){
    cout << num[i] << " ";
  }

  cout << num[N-1] << endl;

  cout << cnt << endl;

  return 0;
}
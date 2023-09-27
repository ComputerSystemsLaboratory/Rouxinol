#include<iostream>
using namespace std;

int main(){
  int n, m, Taro[100], Hanako[100];
  while(1){
    cin>>n>>m;
    if(!(n + m)) return 0;
    int sum_T = 0, sum_H = 0;
    for(int i=0;i<n;i++){
      cin>>Taro[i];
      sum_T += Taro[i];
    }
    for(int i=0;i<m;i++){
      cin>>Hanako[i];
      sum_H += Hanako[i];
    }
    int diff;
    diff = sum_T - sum_H;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if((Taro[i] - Hanako[j]) * 2 == diff){
	  cout<<Taro[i]<<" "<<Hanako[j]<<endl;
	  i = n;
	  j = m;
	}
	if(i == n-1 && j == m-1){
	  cout<<-1<<endl;
	}
      }
    }
  }
}

